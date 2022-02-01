/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 19:17:26 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#define LILAC	"\e[0;38;5;13m"
#define RESET	"\e[0m"

Cat::Cat(void)
{
	set_type("Cat");
	this->_brain = new Brain();
	std::cout
		<< LILAC
		<< "Cat default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

Cat::Cat(const Cat& obj) : AAnimal(obj)
{
	std::cout
		<< LILAC
		<< "Cat copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout
		<< LILAC
		<< "Cat destructor called"
		<< RESET
		<< std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& o, const Cat& cat)
{
	o
		<< LILAC
		<< "Cat type is: " 
		<< cat.get_type()
		<< RESET;
	return (o);
}

Cat&	Cat::operator=(const Cat& obj)
{
	if (this != &obj)
	{
		this->_type = obj.get_type();
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

void	Cat::make_sound(void) const
{
	std::cout
		<< LILAC
		<< get_type()
		<< " says Meowth! That's right! 😼 "
		<< RESET
		<< std::endl;
}
