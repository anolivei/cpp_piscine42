/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:16 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/16 23:30:17 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
	std::cout
		<< "RobotomyRequestForm default constructor called"
		<< std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
	std::cout
		<< "RobotomyRequestForm copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout
		<< "RobotomyRequestForm destructor called"
		<< std::endl;
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& i)
{
	o << "something";
	return o;
}
