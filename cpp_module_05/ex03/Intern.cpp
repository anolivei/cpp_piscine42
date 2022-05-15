/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:51:05 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 20:35:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
** CONSTRUCTORS AND DESTRUCTOR
*/

Intern::Intern(void)
{
	std::cout
		<< "Intern default constructor called"
		<< std::endl;
	return ;
}

Intern::Intern(const Intern& obj)
{
	std::cout
		<< "Intern copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Intern::~Intern(void)
{
	std::cout
		<< "Intern destructor called"
		<< std::endl;
	return ;
}

/*
** OPERATORS
*/

Intern& Intern::operator=(const Intern& obj)
{
	(void)obj;
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Intern& i)
{
	(void)i;
	o << "Hey! I'm an intern!" << std::endl;
	return o;
}

/*
** PRIVATE METHODS
*/
AForm* Intern::_make_presidential_form(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::_make_robotomy_form(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::_make_shrubbery_form(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

/*
** PUBLIC METHODS
*/

AForm* Intern::make_form(std::string form, std::string target)
{
	std::string form_names[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	AForm	*(Intern::*make_form[3])(std::string target) = {
		&Intern::_make_presidential_form,
		&Intern::_make_robotomy_form,
		&Intern::_make_shrubbery_form,
	};

	for(int i = 0; i < 3; i++)
	{
		if (form == form_names[i])
		{
			std::cout
				<< "Intern creates "
				<< form
				<< " form for "
				<< target
				<< std::endl;
			return ((this->*make_form[i])(target));
		}
	}
	std::cout
		<< "Form "
		<< form
		<< " does not exist"
		<< std::endl;
	return (NULL);
}