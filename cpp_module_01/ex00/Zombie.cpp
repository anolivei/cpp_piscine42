/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:34:10 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/11 01:42:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _zombie_name(name)
{
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout
		<< get_zombie_name() << " is destroyed" << std::endl;
}

std::string	Zombie::get_zombie_name(void) const
{
	return (this->_zombie_name);
}

void	Zombie::set_zombie_name(std::string zombie_name)
{
	this->_zombie_name = zombie_name;
}

void	Zombie::announce(void)
{
	std::cout
		<<	get_zombie_name()
		<< " BraiiiiiiinnnzzzZ..."
		<< std::endl;
}
