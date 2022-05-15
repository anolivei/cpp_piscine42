/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:19 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 18:20:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** CONSTRUCTORS AND DESTRUCTOR
*/

PresidentialPardonForm::PresidentialPardonForm(void)
	: AForm("PresidentialPardonForm", 25, 5), _target("defaut")
{
	std::cout
		<< "PresidentialPardonForm default constructor called"
		<< std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout
		<< "PresidentialPardonForm"
		<< target
		<< "constructor called"
		<< std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
	: AForm(obj)
{
	std::cout
		<< "PresidentialPardonForm copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout
		<< "PresidentialPardonForm destructor called"
		<< std::endl;
	return ;
}

/*
** OPERATORS
*/

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	if (this != &obj)
	{
		this->_target = obj.get_target();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& i)
{
	o << "Target: "
	<< i.get_target();
	return o;
}

/*
** GETTERS
*/

std::string	PresidentialPardonForm::get_target(void) const
{
	return (this->_target);
}

/*
** PUBLIC METHODS
*/

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->check_executor(executor);
	std::cout
		<< this->get_target()
		<< " has been pardoned by Zaphod Beeblebrox."
		<< std::endl;
	return ;
}