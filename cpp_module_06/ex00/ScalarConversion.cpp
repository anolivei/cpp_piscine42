/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/03 11:35:14 by anolivei         ###   ########.fr       */
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

void	ScalarConversion::_checkType(void) {
}