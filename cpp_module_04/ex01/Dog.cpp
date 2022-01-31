/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:01 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 16:25:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#define V_CYAN	"\e[0;38;5;44m"
#define RESET	"\e[0m"

Dog::Dog(void)
{
	set_type("Dog");
	this->_brain = new Brain();
	std::cout
		<< V_CYAN
		<< "Dog default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
	std::cout
		<< V_CYAN
		<< "Dog copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout
		<< V_CYAN
		<< "Dog destructor called"
		<< RESET
		<< std::endl;
	return ;
}

Dog& Dog::operator=(const Dog& obj)
{
	if (this != &obj)
	{
		this->_type = obj.get_type();
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Dog& dog)
{
	o
		<< V_CYAN
		<< "Dog type is: "
		<< dog.get_type()
		<< RESET;
	return (o);
}

void	Dog::make_sound(void) const
{
	std::cout
		<< V_CYAN
		<< get_type()
		<< " says 🔥This is fine.🔥"
		<< RESET
		<< std::endl;
}
