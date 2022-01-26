/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 21:00:17 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

#define CYAN	"\e[0;36m"
#define RESET	"\e[0m"

ScavTrap::ScavTrap(void)
{
	this->set_name("He Who Must Not Be Named");
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_atack_damage(20);
	std::cout
		<< CYAN
		<< "ScavTrap default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout
		<< CYAN
		<< "ScavTrap copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_atack_damage(20);
	std::cout
		<< CYAN
		<< "ScavTrap string constructor called"
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< CYAN
		<< "ScavTrap destructor called"
		<< RESET
		<< std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
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


void ScavTrap::attack(const std::string& target)
{
	if (get_energy_points() > 0)
	{
		set_energy_points(this->_energy_points - 1);
		std::cout
			<< CYAN
			<< "[KAPOW]  ScavTrap "
			<< get_name()
			<< " attacks "
			<< target
			<< ", causing "
			<< get_atack_damage()
			<< " points of damage!"
			<< RESET
			<< std::endl;
	}
	else
	{
		std::cout
			<< CYAN
			<< get_name()
			<< " is out of energy..."
			<< RESET
			<< std::endl;
	}
}

void	ScavTrap::guard_gate(void)
{
	std::cout
		<< CYAN
		<< "[GRRRR]  Scavtrap "
		<< this->get_name()
		<< " is now in Gate keeper mode!"
		<< RESET
		<< std::endl;
}
std::ostream&	operator<<(std::ostream& o, const ScavTrap& scav_trap)
{
	o
		<< CYAN
		<< "[STATUS] "
		<< scav_trap.get_name()
		<< " - Hit Points:"
		<< scav_trap.get_hit_points()
		<< " Energy Points:"
		<< scav_trap.get_energy_points()
		<< " Atack Damage:"
		<< scav_trap.get_atack_damage()
		<< RESET
		<< std::endl;
	return (o);
}
