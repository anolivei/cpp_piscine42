/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 20:51:15 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#define BLUE	"\e[0;34m"
#define RESET	"\e[0m"

ClapTrap::ClapTrap(void) : _name("He Who Must Not Be Named"), _hit_points(100),
	_energy_points(10), _atack_damage(0)
{
	std::cout
		<< BLUE
		<< "ClapTrap default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout
		<< BLUE
		<< "ClapTrap copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100),
	_energy_points(10), _atack_damage(0)
{
	std::cout
		<< BLUE
		<< "ClapTrap string constructor called"
		<< RESET
		<< std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout
		<< BLUE
		<< "ClapTrap destructor called"
		<< RESET
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

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
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
			<< BLUE
			<< "[POW]    ClapTrap "
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
			<< BLUE
			<< get_name()
			<< " is out of energy..."
			<< RESET
			<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (get_hit_points() > 0)
	{
		set_hit_points(this->_hit_points - amount);
		std::cout
			<< BLUE
			<< "[OUCH]   "
			<< get_name()
			<< " took "
			<< amount
			<< " points of damage!"
			<< RESET
			<< std::endl;
	}
	else
	{
		std::cout
			<< BLUE
			<< "[F]      "
			<< get_name()
			<< " is dead..."
			<< RESET
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
			<< BLUE
			<< "[REPAIR] "
			<< get_name()
			<< " repaired "
			<< amount
			<< " hit points!"
			<< RESET
			<< std::endl;
	}
	else
	{
		std::cout
			<< BLUE
			<< "[TIRED]  "
			<< get_name()
			<< " is out of energy..."
			<< RESET
			<< std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap)
{
	o
		<< BLUE
		<< "[STATUS] "
		<< clap_trap.get_name()
		<< " - Hit Points:"
		<< clap_trap.get_hit_points()
		<< " Energy Points:"
		<< clap_trap.get_energy_points()
		<< " Atack Damage:"
		<< clap_trap.get_atack_damage()
		<< RESET
		<< std::endl;
	return (o);
}
