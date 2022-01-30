/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:43:44 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/30 15:46:31 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout
		<< "Ice default constructor called"
		<< std::endl;
	return ;
}

Ice::Ice(const Ice& obj) : AMateria("ice")
{
	std::cout
		<< "Ice copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Ice::~Ice(void)
{
	std::cout
		<< "Ice destructor called"
		<< std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

Ice*	Ice::clone(void) const
{
	return (new Ice(*this));
}
