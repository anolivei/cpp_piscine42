/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/03 19:14:58 by anolivei         ###   ########.fr       */
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
		this->_type = obj._type;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ScalarConversion& i)
{
	o << "char: " << i.valueChar << std::endl
	<< "int: " << i.valueInt << std::endl
	<< "float: " << i.valueFloat << std::endl
	<< "double: " << i.valueDouble;
	return o;
}

/*
** Checking type
*/

void	ScalarConversion::_checkType(void)
{
	if (_isChar(this->_arg))
		this->_type = "char";
	else if (_isInt(this->_arg))
		this->_type = "int";
	else if (_isFloat(this->_arg))
		this->_type = "float";
	else if (_isDouble(this->_arg))
		this->_type = "double";
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
	std::string pseudoLit = arg;
	if (pseudoLit == "-inff" || pseudoLit == "+inff" || pseudoLit == "nanf")
		return (true);

	int i = 0;
	bool point = false;

	if (arg[i] == '-')
		i++;
	while (arg[i])
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.' && arg[i] != 'f')
			return (false);
		if (arg[i] == '.' && point)
			return (false);
		if (arg[i] == 'f' && (arg[i + 1] != '\0' || !point))
			return (false);
		if (arg[i] == '.')
			point = true;
		i++;
	}
	if (arg[i - 1] == 'f')
		return (true);
	return (false);
}

bool	ScalarConversion::_isDouble(char *arg)
{
	std::string  pseudoLit = arg;
	if (pseudoLit == "-inf" || pseudoLit == "+inf" || pseudoLit == "nan")
		return (true);

	int i = 0;
	bool point = false;

	if (arg[i] == '-')
		i++;
	while (arg[i])
	{
		if ((arg[i] < '0' || arg[i] > '9') && arg[i] != '.')
			return (false);
		if (arg[i] == '.' && point)
			return (false);
		if (arg[i] == '.')
			point = true;
		i++;
	}
	return (true);
}