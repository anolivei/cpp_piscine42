/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:29:58 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/14 01:27:28 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon)
{
	set_name(name);
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::set_name(std::string name)
{
	this->_name = name;
}

std::string	HumanA::get_name(void) const
{
	return (this->_name);
}

Weapon HumanA::get_weapon(void) const
{
	return (this->_weapon);
}

void	HumanA::attack()
{
	std::cout
		<< get_name()
		<< " attacks with his "
		<< get_weapon().get_type()
		<< std::endl;
}
