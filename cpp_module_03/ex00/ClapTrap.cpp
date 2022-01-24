/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/24 01:50:55 by anolivei         ###   ########.fr       */
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
			<< "ClapTrap "
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
			<< "Energy points equals to zero"
			<< std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (get_hit_points() > 0)
		set_hit_points(this->_hit_points - amount);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	set_hit_points(this->_hit_points + amount);
	set_energy_points(this->_energy_points - 1);
}
