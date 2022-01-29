/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:42:32 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 01:12:25 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#define GREEN	"\e[0;32m"
#define RESET	"\e[0m"

Animal::Animal(void) : _type("Animal")
{
	std::cout
		<< GREEN
		<< "Animal default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

Animal::Animal(const Animal& obj)
{
	std::cout
		<< GREEN
		<< "Animal copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

Animal::~Animal(void)
{
	std::cout
		<< GREEN
		<< "Animal destructor called"
		<< RESET
		<< std::endl;
	return ;
}

Animal& Animal::operator=(const Animal& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

std::ostream& operator<<(std::ostream& o, Animal const& animal)
{
	o
		<< GREEN
		<< "Animal type is: "
		<< animal.get_type()
		<< RESET;
	return (o);
}

void	Animal::set_type(std::string type)
{
	this->_type = type;
}

std::string	Animal::get_type(void) const
{
	return (this->_type);
}

void	Animal::make_sound(void) const
{
	std::cout
		<< GREEN
		<< get_type()
		<< " makes an animal sound"
		<< RESET
		<< std::endl;
}
