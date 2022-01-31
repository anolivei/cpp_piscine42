/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 16:06:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#define PINK	"\e[0;38;5;199m"
#define RESET	"\e[0m"

WrongCat::WrongCat(void)
{
	set_type("WrongCat");
	std::cout
		<< PINK
		<< "WrongCat default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
	std::cout
		<< PINK
		<< "WrongCat copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout
		<< PINK
		<< "WrongCat destructor called"
		<< RESET
		<< std::endl;
	return ;
}

std::ostream&	operator<<(std::ostream& o, const WrongCat& wrong_cat)
{
	o
		<< PINK
		<< "WrongCat type is: "
		<< wrong_cat.get_type()
		<< RESET;
	return (o);
}

WrongCat&	WrongCat::operator=(const WrongCat& obj)
{
	if (this != &obj)
		this->_type = obj.get_type();
	return (*this);
}

void	WrongCat::make_sound(void) const
{
	std::cout
		<< PINK
		<< get_type()
		<< " says Meowth! That's right! 😼 "
		<< RESET
		<< std::endl;
}
