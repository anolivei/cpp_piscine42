/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:29 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 02:05:45 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#define BLUE	"\e[0;34m"
#define RESET	"\e[0m"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout
		<< BLUE
		<< "WrongAnimal default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj)
{
	std::cout
		<< BLUE
		<< "WrongAnimal copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout
		<< BLUE
		<< "WrongAnimal destructor called"
		<< RESET
		<< std::endl;
	return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, WrongAnimal const& WrongAnimal)
{
	o
		<< BLUE
		<< "WrongAnimal type is: "
		<< WrongAnimal.get_type()
		<< RESET;
	return (o);
}

void	WrongAnimal::set_type(std::string type)
{
	this->_type = type;
}

std::string	WrongAnimal::get_type(void) const
{
	return (this->_type);
}

void	WrongAnimal::make_sound(void) const
{
	std::cout
		<< BLUE
		<< get_type()
		<< " makes a WrongAnimal sound"
		<< RESET
		<< std::endl;
}
