/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:42:32 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 21:57:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

#define GREEN	"\e[0;32m"
#define RESET	"\e[0m"

AAnimal::AAnimal(void) : _type("AAnimal")
{
	std::cout
		<< GREEN
		<< "AAnimal default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal& obj)
{
	std::cout
		<< GREEN
		<< "AAnimal copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout
		<< GREEN
		<< "AAnimal destructor called"
		<< RESET
		<< std::endl;
	return ;
}

AAnimal& AAnimal::operator=(const AAnimal& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, AAnimal const& AAnimal)
{
	o
		<< GREEN
		<< "AAnimal type is: "
		<< AAnimal.get_type()
		<< RESET;
	return (o);
}

void	AAnimal::set_type(std::string type)
{
	this->_type = type;
}

std::string	AAnimal::get_type(void) const
{
	return (this->_type);
}

void	AAnimal::make_sound(void) const
{
	std::cout
		<< GREEN
		<< get_type()
		<< " makes an AAnimal sound"
		<< RESET
		<< std::endl;
}
