/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/02 16:01:46 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

Scalar::Scalar(void)
{
	std::cout
		<< "Scalar default constructor called"
		<< std::endl;
	return ;
}

Scalar::Scalar(const Scalar& obj)
{
	std::cout
		<< "Scalar copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Scalar::~Scalar(void)
{
	std::cout
		<< "Scalar destructor called"
		<< std::endl;
	return ;
}

Scalar& Scalar::operator=(const Scalar& obj)
{
	//if (this != &obj)
	//{
	//	this->XXX = obj.XXX();
	//}
	std::cout << obj;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Scalar& i)
{
	o << i;
	return o;
}
