/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nnn.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:59:44 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 01:59:45 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "nnn.hpp"

nnn::nnn(void)
{
	std::cout
		<< "nnn default constructor called"
		<< std::endl;
	return ;
}

nnn::nnn(const nnn& obj)
{
	std::cout
		<< "nnn copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

nnn::~nnn(void)
{
	std::cout
		<< "nnn destructor called"
		<< std::endl;
	return ;
}

nnn& nnn::operator=(const nnn& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const nnn& i)
{
	o << "something";
	return o;
}
