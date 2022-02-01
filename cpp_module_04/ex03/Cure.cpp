/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:51:35 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 23:25:33 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout
		<< "Cure default constructor called"
		<< std::endl;
	return ;
}

Cure::Cure(const Cure& obj) : AMateria("cure")
{
	std::cout
		<< "Cure copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Cure::~Cure(void)
{
	std::cout
		<< "Cure destructor called"
		<< std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& obj)
{
	(void)obj;
	return (*this);
}

Cure*	Cure::clone(void) const
{
	return (new Cure(*this));
}
