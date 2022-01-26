/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 14:05:44 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

#define PINK	"\e[0;38;5;199m"
#define RESET	"\e[0m"

DiamondTrap::DiamondTrap(void): ClapTrap("Clap He Who Must Not Be Named"),
	ScavTrap("He Who Must Not Be Named"), FragTrap("He Who Must Not Be Named")
{
	ClapTrap::_name = "Clap He Who Must Not Be Named";
	this->_name = "He Who Must Not Be Named";
	this->set_hit_points(FragTrap::get_hit_points());
	this->set_energy_points(ScavTrap::get_energy_points());
	this->set_atack_damage(FragTrap::get_atack_damage());
	std::cout
		<< PINK
		<< "DiamondTrap default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(obj), 
	ScavTrap(obj), FragTrap(obj)
{
	std::cout
		<< PINK
		<< "DiamondTrap copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::set_name("Clap" + name);
	this->set_name(name);
	this->set_hit_points(FragTrap::get_hit_points());
	this->set_energy_points(ScavTrap::get_energy_points());
	this->set_atack_damage(FragTrap::get_atack_damage());
	std::cout
		<< PINK
		<< "DiamondTrap string constructor called"
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout
		<< PINK
		<< "DiamondTrap destructor called"
		<< RESET
		<< std::endl;
	return ;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hit_points = obj._hit_points;
		this->_energy_points = obj._energy_points;
		this->_atack_damage = obj._atack_damage;
	}
	return (*this);
}

std::string	DiamondTrap::get_name(void) const
{
	return (this->_name);
}

void	DiamondTrap::set_name(std::string name)
{
	this->_name = name;
}


void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::who_am_i()
{
	std::cout
		<< PINK
		<< "[OMG!]   I'm "
		<< get_name()
		<< " and "
		<< ClapTrap::get_name()
		<< RESET
		<< std::endl;
}

std::ostream&	operator<<(std::ostream& o, const DiamondTrap& diamond_trap)
{
	o
		<< PINK
		<< "[STATUS] "
		<< diamond_trap.get_name()
		<< " - Hit Points:"
		<< diamond_trap.get_hit_points()
		<< " Energy Points:"
		<< diamond_trap.get_energy_points()
		<< " Atack Damage:"
		<< diamond_trap.get_atack_damage()
		<< RESET
		<< std::endl;
	return (o);
}
