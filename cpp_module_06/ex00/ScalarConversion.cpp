/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/05 23:05:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(void)
{
	std::cout
		<< "ScalarConversion default constructor called"
		<< std::endl;
	return ;
}

ScalarConversion::ScalarConversion(char * arg) : _arg(arg)
{
	this->output = arg;
	this->_checkType();
	this->_checkLimit();
	this->_convert();
	this->_printValues();
	return ;
}

ScalarConversion::ScalarConversion(const ScalarConversion& obj)
{
	std::cout
		<< "ScalarConversion copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

ScalarConversion::~ScalarConversion(void)
{
	return ;
}

ScalarConversion& ScalarConversion::operator=(const ScalarConversion& obj)
{
	if (this != &obj)
	{
		this->_arg = obj._arg;
		this->_type = obj._type;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ScalarConversion& i)
{
	o << i.output;
	return o;
}

/*
** Check Type
*/

void	ScalarConversion::_checkType(void)
{
	if (_isChar(this->_arg))
		this->_type = CHAR;
	else if (_isInt(this->_arg))
		this->_type = INT;
	else if (_isFloat(this->_arg))
		this->_type = FLOAT;
	else if (_isDouble(this->_arg))
		this->_type = DOUBLE;
	else if (_isPseudoLiteral(this->_arg))
		this->_type = PSEUDO_LITERAL;
	else
		throw ScalarConversion::ImpossibleTypeConversation();
}

bool	ScalarConversion::_isChar(char *arg)
{
	if (arg[1] == '\0' && 
		((arg[0] >= '!' && arg[0] <= '/') ||
		(arg[0] >= ':' && arg[0] <= '~')))
		return (true);
	return (false);
}

bool	ScalarConversion::_isInt(char *arg)
{
	int	i;

	i = 0;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool	ScalarConversion::_isFloat(char *arg)
{
	int i = 0;
	bool isPoint = false;

	if (arg[i] == '-')
		i++;
	while (arg[i])
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.' && arg[i] != 'f')
			return (false);
		if (arg[i] == '.' && isPoint)
			return (false);
		if (arg[i] == 'f' && (arg[i + 1] != '\0' || !isPoint))
			return (false);
		if (arg[i] == '.')
			isPoint = true;
		i++;
	}
	if (arg[i - 1] == 'f')
		return (true);
	return (false);
}

bool	ScalarConversion::_isDouble(char *arg)
{
	int i = 0;
	bool isPoint = false;

	if (arg[i] == '-')
		i++;
	while (arg[i])
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
			return (false);
		if (arg[i] == '.' && isPoint)
			return (false);
		if (arg[i] == '.')
			isPoint = true;
		i++;
	}
	return (true);
}

bool	ScalarConversion::_isPseudoLiteral(char *arg)
{
	std::string  pseudoLit = arg;
	if (pseudoLit == "-inff" || pseudoLit == "+inff" || pseudoLit == "nanf" ||
		pseudoLit == "-inf" || pseudoLit == "+inf" || pseudoLit == "nan")
		return (true);
	return (false);
}

/*
** Check limits
*/

void	ScalarConversion::_checkLimit(void)
{
	this->_charLimit = false;
	this->_intLimit = false;
	this->_floatLimit = false;
	this->_doubleLimit = false;
	double value = strtod(this->_arg, NULL);
	if (value < 0 || value > 127)
		this->_charLimit = true;
	if (value < INT_MIN || value > INT_MAX)
		this->_intLimit = true;
	if (value < -FLT_MAX|| value > FLT_MAX)
		this->_floatLimit = true;
	if (value < -DBL_MAX || value > DBL_MAX)
		this->_doubleLimit = true;
} 

/*
** Convert
*/

void	ScalarConversion::_convert(void)
{
	std::cout << std::fixed << std::setprecision(1);
	switch (this->_type)
	{
		case CHAR:
			this->_charConvert();
			break;
		case INT:
			this->_intConvert();
			break;
		case FLOAT:
			this->_floatConvert();
			break;
		case DOUBLE:
			this->_doubleConvert();
			break;
		case PSEUDO_LITERAL:
			this->_pseudoLiteralConvert();
			break;
		default:
			throw ScalarConversion::ImpossibleTypeConversation();
	}
}

void	ScalarConversion::_charConvert(void) 
{
	this->_valueChar = this->_arg[0];
	this->_valueInt = static_cast<int>(this->_valueChar);
	this->_valueFloat = static_cast<float>(this->_valueChar);
	this->_valueDouble = static_cast<double>(this->_valueChar);
}

void	ScalarConversion::_intConvert(void) 
{
	this->_valueInt = atoi(this->_arg);
	this->_valueChar = static_cast<char>(this->_valueInt);
	this->_valueFloat = static_cast<float>(this->_valueInt);
	this->_valueDouble = static_cast<double>(this->_valueInt);
}

void	ScalarConversion::_floatConvert(void) 
{
	this->_valueFloat = atof(this->_arg);
	this->_valueChar = static_cast<char>(this->_valueFloat);
	this->_valueInt = static_cast<int>(this->_valueFloat);
	this->_valueDouble = static_cast<double>(this->_valueFloat);
}

void	ScalarConversion::_doubleConvert(void) 
{
	this->_valueDouble = strtod(this->_arg, NULL);
	this->_valueChar = static_cast<char>(this->_valueDouble);
	this->_valueInt = static_cast<int>(this->_valueDouble);
	this->_valueFloat = static_cast<float>(this->_valueDouble);
}

void	ScalarConversion::_pseudoLiteralConvert(void) 
{
	std::string  pseudoLit = this->_arg;
	if (pseudoLit == "-inff" || pseudoLit == "+inff" || pseudoLit == "nanf")
	{
		pseudoLit = this->_arg;
		int i = 0;
		while (pseudoLit[i + 1])
			i++;
		pseudoLit[i] = '\0';
		this->_valuePseudoLiteral =  pseudoLit;
	}
	else
		this->_valuePseudoLiteral = this->_arg;
}

/*
** Print values
*/

void ScalarConversion::_printValues(void)
{
	if (this->_type == PSEUDO_LITERAL)
		this->_printPseudoLiteral();
	else {
		this->_printChar();
		this->_printInt();
		this->_printFloat();
		this->_printDouble();
	}
}

void ScalarConversion::_printPseudoLiteral(void)
{
	std::cout
		<< "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << this->_valuePseudoLiteral << "f" << std::endl
		<< "double: " << this->_valuePseudoLiteral << std::endl;
}

void ScalarConversion::_printChar(void)
{
	if ((this->_valueInt >= 0 && this->_valueInt < 33) || this->_valueInt == 127)
		std::cout << "char: Non displayable" << std::endl;
	else if (this->_charLimit == true)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << this->_valueChar << "'" << std::endl;
}

void ScalarConversion::_printInt(void)
{
	if (this->_intLimit || this->_floatLimit || this->_doubleLimit)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << this->_valueInt << std::endl;;
}

void ScalarConversion::_printFloat(void) {
	if ((this->_intLimit && this->_type == INT) ||
		this->_floatLimit || this->_doubleLimit)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << this->_valueFloat << "f" << std::endl;;
}

void ScalarConversion::_printDouble(void) {
	if ((this->_intLimit && this->_type == INT) ||
		(this->_floatLimit && this->_type == FLOAT) ||
		this->_doubleLimit)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << this->_valueDouble << std::endl;;
}
