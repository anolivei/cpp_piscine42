/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:59:44 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 01:59:45 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout
		<< "Brain default constructor called"
		<< std::endl;
	return ;
}

Brain::Brain(const Brain& obj)
{
	std::cout
		<< "Brain copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Brain::~Brain(void)
{
	std::cout
		<< "Brain destructor called"
		<< std::endl;
	return ;
}

Brain& Brain::operator=(const Brain& obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

std::string*	Brain::get_ideas(void)
{
	return (this->_ideas);
}

std::ostream&	operator<<(std::ostream& o, const Brain& brain)
{
	(void)brain;
	o 
		<< "A pointer value";
	return o;
}
