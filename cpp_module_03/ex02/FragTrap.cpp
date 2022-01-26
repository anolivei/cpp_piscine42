/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 20:16:08 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->set_name("He Who Must Not Be Named");
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_atack_damage(30);
	std::cout
		<< "FragTrap default constructor called"
		<< std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout
		<< "FragTrap copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->set_name(name);
	this->set_hit_points(100);
	this->set_energy_points(100);
	this->set_atack_damage(30);
	std::cout
		<< "FragTrap string constructor called"
		<< std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout
		<< "FragTrap destructor called"
		<< std::endl;
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
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

void	FragTrap::high_fives_guys(void)
{
	std::cout
		<< "[WOW]    FragTrap "
		<< this->get_name()
		<< " says: Hi five folks! Very teamwork! So wow!"
		<< std::endl;
}
std::ostream&	operator<<(std::ostream& o, const FragTrap& frag_trap)
{
	o
		<< "[STATUS] "
		<< frag_trap.get_name()
		<< " - Hit Points:"
		<< frag_trap.get_hit_points()
		<< " Energy Points:"
		<< frag_trap.get_energy_points()
		<< " Atack Damage:"
		<< frag_trap.get_atack_damage()
		<< std::endl;
	return (o);
}
