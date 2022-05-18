/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:13 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/17 22:59:21 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

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
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Scalar& i)
{
	o << "something";
	return o;
}
