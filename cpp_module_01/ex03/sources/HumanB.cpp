/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:30:04 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/14 01:29:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	set_name(name);
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::set_name(std::string name)
{
	this->_name = name;
}

std::string	HumanB::get_name(void) const
{
	return (this->_name);
}

void	HumanB::set_weapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

Weapon	HumanB::get_weapon(void) const
{
	return (*this->_weapon);
}

void	HumanB::attack()
{
	std::cout
		<<  get_name()
		<< " attacks with his "
		<< get_weapon().get_type()
		<< std::endl;
}
