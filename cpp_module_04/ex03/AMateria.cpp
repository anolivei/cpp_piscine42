/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 23:26:01 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout
		<< "AMateria default constructor called"
		<< std::endl;
	return ;
}

AMateria::AMateria(const AMateria& obj)
{
	std::cout
		<< "AMateria copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout
		<< "AMateria destructor called"
		<< std::endl;
	return ;
}

AMateria& AMateria::operator=(const AMateria& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const AMateria& i)
{
	o << "something";
	return o;
}
