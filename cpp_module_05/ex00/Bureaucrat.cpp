/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 03:29:15 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/02 23:49:00 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat default constructor called"
		<< std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	std::cout
		<< "Bureaucrat copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat destructor called"
		<< std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->_grade = obj.get_grade();
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high...");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low...");
}

const std::string	Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int	Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::increment_grade(void)
{
	this->_grade--;
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		this->_grade++;
		std::cerr
			<< e.what()
			<< std::endl;
	}
}

void	Bureaucrat::decrement_grade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		this->_grade--;
		std::cerr
			<< e.what()
			<< std::endl;
	}
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& i)
{
	o
		<< i.get_name()
		<< ", bureaucrat grade "
		<< i.get_grade();
	return o;
}
