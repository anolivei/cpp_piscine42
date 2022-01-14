/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:30:12 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/14 00:53:12 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	set_type(type);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string& Weapon::get_type(void) const
{
	return (this->_type);
}

void	Weapon::set_type(const std::string& type)
{
	this->_type = type;
}
