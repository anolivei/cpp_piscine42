/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 21:20:23 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

#define GREEN	"\e[0;32m"
#define RESET	"\e[0m"

FragTrap::FragTrap(void)
{
	this->set_name("He Who Must Not Be Named");
	this->set_hit_points(ClapTrap::get_hit_points());
	this->set_energy_points(100);
	this->set_atack_damage(30);
	std::cout
		<< GREEN
		<< "FragTrap default constructor called"
		<< RESET
		<< std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout
		<< GREEN
		<< "FragTrap copy constructor called"
		<< RESET
		<< std::endl;
	*this = obj;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->set_name(name);
	this->set_hit_points(ClapTrap::get_hit_points());
	this->set_energy_points(100);
	this->set_atack_damage(30);
	std::cout
		<< GREEN
		<< "FragTrap string constructor called"
		<< RESET
		<< std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout
		<< GREEN
		<< "FragTrap destructor called"
		<< RESET
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

void	FragTrap::attack(const std::string& target)
{
	if (get_energy_points() > 0)
	{
		set_energy_points(this->_energy_points - 1);
		std::cout
			<< GREEN
			<< "[BAM!]   FragTrap "
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
			<< get_name()
			<< " is out of energy..."
			<< std::endl;
	}
}

void	FragTrap::high_fives_guys(void)
{
	std::cout
		<< GREEN
		<< "[WOW]    FragTrap "
		<< this->get_name()
		<< " says: Hi five folks! Very teamwork! So wow!"
		<< RESET
		<< std::endl;
}

std::ostream&	operator<<(std::ostream& o, const FragTrap& frag_trap)
{
	o
		<< GREEN
		<< "[STATUS] "
		<< frag_trap.get_name()
		<< " - Hit Points:"
		<< frag_trap.get_hit_points()
		<< " Energy Points:"
		<< frag_trap.get_energy_points()
		<< " Atack Damage:"
		<< frag_trap.get_atack_damage()
		<< RESET
		<< std::endl;
	return (o);
}
