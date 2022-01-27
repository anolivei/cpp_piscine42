/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:01 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:46:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

Dog::Dog(const Dog& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Dog::~Dog(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
