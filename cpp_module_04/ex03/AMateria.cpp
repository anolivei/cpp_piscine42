/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 23:15:33 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout
		<< "AMateria default constructor called"
		<< std::endl;
	this->_type = "default";
	return ;
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout
		<< "AMateria copy constructor called: "
		<< obj.get_type()
		<< std::endl;
	*this = obj;
	return ;
}

AMateria::AMateria(const std::string& type)
{
	std::cout
		<< "AMateria string constructor called: "
		<< type
		<< std::endl;
	this->_type = type;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout
		<< "AMateria destructor called: "
		<< get_type()
		<< std::endl;
	return ;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	(void)obj;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	if (get_type() == "ice")
	{
		std::cout
			<< "* shoots an ice bolt at "
			<< target.get_name()
			<< " *"
			<< std::endl;
	}
	if (get_type() == "cure")
	{
		std::cout
			<< "* heals "
			<< target.get_name()
			<< "'s wounds *"
			<< std::endl;
	}
}

std::string	AMateria::get_type(void) const
{
	return (this->_type);
}

std::ostream&	operator<<(std::ostream& o, const AMateria& i)
{
	o
		<< "AMateria type is: "
		<< i.get_type();
	return o;
}
