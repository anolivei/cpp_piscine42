/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 03:29:15 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/03 03:39:53 by anolivei         ###   ########.fr       */
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

const char* Bureaucrat::GradeTooHighException::grade_except(void) const throw()
{
	return ("Grade is too high...");
}

const char* Bureaucrat::GradeTooLowException::grade_except(void) const throw()
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
			<< e.grade_except()
			<< std::endl;
	}
}

void	Bureaucrat::decrement_grade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		this->_grade--;
		std::cerr
			<< e.grade_except()
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
