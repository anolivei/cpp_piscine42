/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/04 22:49:14 by anolivei         ###   ########.fr       */
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
	this->_checkType();
	this->_convert();
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
	std::cout
		<< "ScalarConversion destructor called"
		<< std::endl;
	return ;
}

ScalarConversion& ScalarConversion::operator=(const ScalarConversion& obj)
{
	if (this != &obj)
	{
		this->_arg = obj._arg;
		this->type = obj.type;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ScalarConversion& i)
{
	if (i.type != PSEUDO_LITERAL)
	{
		o << "char: '" << i.valueChar << "'" << std::endl
		<< "int: " << i.valueInt << std::endl
		<< "float: " << i.valueFloat << "f" << std::endl
		<< "double: " << i.valueDouble;
	}
	else
		o << "char: impossible" << std::endl
		<< "int: impossible" << std::endl
		<< "float: " << i.valuePseudoLiteral << "f" << std::endl
		<< "double: " << i.valuePseudoLiteral;
	return o;
}

/*
** Checking type
*/

void	ScalarConversion::_checkType(void)
{
	if (_isChar(this->_arg))
		this->type = CHAR;
	else if (_isInt(this->_arg))
		this->type = INT;
	else if (_isFloat(this->_arg))
		this->type = FLOAT;
	else if (_isDouble(this->_arg))
		this->type = DOUBLE;
	else if (_isPseudoLiteral(this->_arg))
		this->type = PSEUDO_LITERAL;
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
** Convert
*/

void	ScalarConversion::_convert(void)
{
	std::cout << std::fixed << std::setprecision(1);
	switch (this->type)
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
	this->valueChar = this->_arg[0];
	this->valueInt = static_cast<int>(this->valueChar);
	this->valueFloat = static_cast<float>(this->valueChar);
	this->valueDouble = static_cast<double>(this->valueChar);
}

void	ScalarConversion::_intConvert(void) 
{
	this->valueInt = atoi(this->_arg);
	this->valueChar = static_cast<char>(this->valueInt);
	this->valueFloat = static_cast<float>(this->valueInt);
	this->valueDouble = static_cast<double>(this->valueInt);
}

void	ScalarConversion::_floatConvert(void) 
{
	this->valueFloat = atof(this->_arg);
	this->valueChar = static_cast<char>(this->valueFloat);
	this->valueInt = static_cast<int>(this->valueFloat);
	this->valueDouble = static_cast<double>(this->valueFloat);
}

void	ScalarConversion::_doubleConvert(void) 
{
	this->valueDouble = strtod(this->_arg, NULL);
	this->valueChar = static_cast<char>(this->valueDouble);
	this->valueInt = static_cast<int>(this->valueDouble);
	this->valueFloat = static_cast<float>(this->valueDouble);
}

void	ScalarConversion::_pseudoLiteralConvert(void) 
{
	this->valuePseudoLiteral = this->_arg;
	int i = 0;
	while (this->valuePseudoLiteral[i + 1])
		i++;
	if (this->valuePseudoLiteral[i] == 'f')
		this->valuePseudoLiteral[i] = '\0';
}
