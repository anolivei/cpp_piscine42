/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:49 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 23:23:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
	std::cout
		<< "Character default constructor called"
		<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = "dafault";
	return ;
}

Character::Character(const Character& obj)
{
	std::cout
		<< "Character copy constructor called: "
		<< obj.get_name()
		<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	*this = obj;

	return ;
}

Character::Character(std::string name)
{
	std::cout
		<< "Character string constructor called: "
		<< name
		<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_name = name;
}

Character::~Character(void)
{
	std::cout
		<< "Character destructor called: "
		<< get_name()
		<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}

const std::string&	Character::get_name(void) const
{
	return (this->_name);
}

Character& Character::operator=(const Character& obj)
{
	if (this != &obj)
	{
		this->_name = obj.get_name();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (obj._inventory[i])
				this->_inventory[i] = obj._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Character& i)
{
	o 
		<< "Character name is: "
		<< i.get_name();
	return o;
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_inventory[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	return ;
}
