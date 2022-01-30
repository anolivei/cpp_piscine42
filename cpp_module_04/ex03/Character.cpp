/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:49 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 23:26:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout
		<< "Character default constructor called"
		<< std::endl;
	return ;
}

Character::Character(const Character& obj)
{
	std::cout
		<< "Character copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Character::~Character(void)
{
	std::cout
		<< "Character destructor called"
		<< std::endl;
	return ;
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Character& i)
{
	o << "something";
	return o;
}
