/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:16 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/16 19:57:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** CONSTRUCTORS AND DESTRUCTORS
*/

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout
		<< "RobotomyRequestForm default constructor called"
		<< std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
	: AForm(obj)
{
	std::cout
		<< "RobotomyRequestForm copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout
		<< "RobotomyRequestForm "
		<< target
		<< " constructor called"
		<< std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout
		<< "RobotomyRequestForm destructor called"
		<< std::endl;
	return ;
}

/*
** OPERATOR OVERLOADS
*/

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	if (this != &obj)
	{
		this->_target = obj.get_target();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& i)
{
	o << "Target: "
	<< i.get_target();
	return o;
}

/*
** GETTERS
*/

std::string	RobotomyRequestForm::get_target(void) const
{
	return (this->_target);
}

/*
** METHDOS
*/

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	int	num;

	this->check_executor(executor);
	std::cout
		<< "ZZZZ ZUUM ZUUUM ZUUUM ZUUM ZZZZ ";
	num = std::rand() % 2;
	if (num == 0)
		std::cout << "has been robotomized successfully" << std::endl;
	else
		std::cout << "the robotomy failed" << std::endl;
}
