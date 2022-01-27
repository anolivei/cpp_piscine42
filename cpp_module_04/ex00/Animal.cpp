/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:42:32 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:42:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

Animal::Animal(const Animal& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Animal::~Animal(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
