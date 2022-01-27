/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:46:11 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

Cat::Cat(const Cat& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Cat::~Cat(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Cat& Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
