/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 03:29:15 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 18:21:53 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** CONSTRUCTORS AND DESTRUCTOR
*/

Bureaucrat::Bureaucrat(void) :
	_name("default"), _grade(150)
{
	std::cout
		<< "Bureaucrat: "
		<< get_name()
		<< " Grade: "
		<< get_grade()
		<< " created by default"
		<< std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	*this = obj;
	std::cout
		<< "Bureaucrat: "
		<< get_name()
		<< " Grade: "
		<< get_grade()
		<< " copied"
		<< std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : 
	_name(name), _grade(grade)
{
	this->_check_high();
	this->_check_low();
	std::cout
		<< "Bureaucrat: "
		<< get_name()
		<< " Grade: "
		<< get_grade()
		<< " created"
		<< std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat "
		<< get_name()
		<< " destructor called"
		<< std::endl;
	return ;
}

/*
** GETTERS
*/

const std::string	Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int	Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

/*
** METHODS
*/

void	Bureaucrat::increment_grade(void)
{
	this->_grade--;
	this->_check_high();
}

void	Bureaucrat::decrement_grade(void)
{
	this->_grade++;
	this->_check_low();
}

void	Bureaucrat::sign_form(AForm& form)
{
	try
	{
		form.be_signed(*this);
		std::cout
			<< get_name()
			<< " signed "
			<< form.get_name()
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout
			<< get_name()
			<< " couldn't sign "
			<< form.get_name()
			<< " because "
			<< e.what()
			<< std::endl;
	}
}

void Bureaucrat::execute_form(AForm& form)
{
	try
	{
		form.execute(*this);
	}
	catch(std::exception& e)
	{
		std::cerr 
			<< get_name()
			<< " couldn't execute "
			<< form.get_name()
			<< " because "
			<< e.what()
			<< std::endl;
	}
	
}

void	Bureaucrat::_check_high(void)
{
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		this->_grade = 1;
		std::cerr
			<< e.what()
			<< std::endl;
	}
}

void	Bureaucrat::_check_low(void)
{
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		this->_grade = 150;
		std::cerr
			<< e.what()
			<< std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}

/*
** OPERATORS OVERLOADING
*/

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->_grade = obj.get_grade();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& i)
{
	o
		<< i.get_name()
		<< ", bureaucrat grade "
		<< i.get_grade();
	return o;
}
