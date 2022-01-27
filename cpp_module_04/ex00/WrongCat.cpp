/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:45:47 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
