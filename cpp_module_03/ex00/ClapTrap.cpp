/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/24 23:36:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("no name"), _hit_points(10),
	_energy_points(10), _atack_damage(0)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
	_energy_points(10), _atack_damage(0)
{
	std::cout
		<< "String constructor called"
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
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

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int	ClapTrap::get_hit_points(void) const
{
	return (this->_hit_points);
}

int	ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

int	ClapTrap::get_atack_damage(void) const
{
	return (this->_atack_damage);
}

void	ClapTrap::set_hit_points(int hit_points)
{
	this->_hit_points = hit_points;
}

void	ClapTrap::set_energy_points(int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::set_atack_damage(int atack_damage)
{
	this->_atack_damage = atack_damage;
}

void ClapTrap::attack(const std::string& target)
{
	if (get_energy_points() > 0)
	{
		set_energy_points(this->_energy_points - 1);
		std::cout
			<< "[POW]    ClapTrap "
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

void ClapTrap::takeDamage(unsigned int amount)
{
	if (get_hit_points() > 0)
	{
		set_hit_points(this->_hit_points - amount);
		std::cout
			<< "[OUCH]   ClapTrap "
			<< get_name()
			<< " took "
			<< amount
			<< " points of damage!"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "[F]      "
			<< get_name()
			<< " is dead..."
			<< std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (get_energy_points() > 0)
	{
		set_hit_points(this->_hit_points + amount);
		set_energy_points(this->_energy_points - 1);
		std::cout
			<< "[REPAIR] ClapTrap "
			<< get_name()
			<< " repaired "
			<< amount
			<< " hit points!"
			<< std::endl;
	}
	else
	{
		std::cout
			<< "[TIRED]  "
			<< get_name()
			<< " is out of energy..."
			<< std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap)
{
	o
		<< "[STATUS] "
		<< clap_trap.get_name()
		<< " - Hit Points:"
		<< clap_trap.get_hit_points()
		<< " Energy Points:"
		<< clap_trap.get_energy_points()
		<< " Atack Damage:"
		<< clap_trap.get_atack_damage()
		<< std::endl;
	return (o);
}
