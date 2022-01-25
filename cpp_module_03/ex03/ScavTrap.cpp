/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 14:05:44 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->set_name("He Who Must Not Be Named");
	this->set_hit_points(100);
	this->set_energy_points(50);
	this->set_atack_damage(20);
	std::cout
		<< "ScavTrap default constructor called"
		<< std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout
		<< "ScavTrap copy constructor called"
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
		<< "ScavTrap string constructor called"
		<< std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout
		<< "ScavTrap destructor called"
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
			<< "[KAPOW]  ScavTrap "
			<< get_name()
			<< " attacks "
			<< target
			<< ", causing "
			<< get_atack_damage()
			<< " points of damage!"
			<< std::endl;
	}
	else
	{
		std::cout
			<< get_name()
			<< " is out of energy..."
			<< std::endl;
	}
}

void	ScavTrap::guard_gate(void)
{
	std::cout
		<< "[GRRRR]  Scavtrap "
		<< this->get_name()
		<< " is now in Gate keeper mode!"
		<< std::endl;
}
std::ostream&	operator<<(std::ostream& o, const ScavTrap& scav_trap)
{
	o
		<< "[STATUS] "
		<< scav_trap.get_name()
		<< " - Hit Points:"
		<< scav_trap.get_hit_points()
		<< " Energy Points:"
		<< scav_trap.get_energy_points()
		<< " Atack Damage:"
		<< scav_trap.get_atack_damage()
		<< std::endl;
	return (o);
}
