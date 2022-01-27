/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:29 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:45:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
