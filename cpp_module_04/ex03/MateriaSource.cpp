/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:11:32 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 22:45:44 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout
		<< "MateriaSource default constructor called"
		<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	std::cout
		<< "MateriaSource copy constructor called"
		<< std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	*this = obj;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout
		<< "MateriaSource destructor called"
		<< std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] != NULL)
				delete this->_materia[i];
			if (obj._materia[i] != NULL)
				this->_materia[i] = obj._materia[i];
			else
				this->_materia[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learn_materia(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = m;
			return ;
		}
	}
	delete m;
	return ;
}

AMateria*	MateriaSource::create_materia(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL && this->_materia[i]->get_type() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}
