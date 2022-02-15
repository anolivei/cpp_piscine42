/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:16:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/14 23:51:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("default"), _is_signed(false), _grade_sign(1), _grade_execute(1)
{
	_check_grades();
	std::cout
		<< "Form default constructor called"
		<< std::endl;
	return ;
}

Form::Form(const Form& obj) :
	_name(obj.get_name()), _is_signed(obj.get_signed_status()),
	_grade_sign(obj.get_grade_sign()), _grade_execute(obj.get_grade_execute())
{
	_check_grades();
	std::cout
		<< "Form copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Form::Form(std::string name, int grade_sign, int grade_execute) :
	_name(name), _is_signed(false),
	_grade_sign(grade_sign), _grade_execute(grade_execute)
{
	_check_grades();
	std::cout
		<< "Form default constructor called"
		<< std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout
		<< "Form destructor called"
		<< std::endl;
	return ;
}

Form& Form::operator=(const Form& obj)
{
	if (this != &obj)
	{
		this->_is_signed = obj.get_signed_status();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Form& i)
{
	std::string	msg_signed;

	if (i.get_signed_status() == false)
		msg_signed = " is not signed";
	else
		msg_signed = " is signed";
	o
		<< "Form "
		<< i.get_name()
		<< msg_signed
		<< " , the grade required to sign is "
		<< i.get_grade_sign()
		<< " , the grade required to execute is"
		<< i.get_grade_execute();
	return o;
}

std::string	Form::get_name(void) const
{
	return (this->_name);
}

bool	Form::get_signed_status(void) const
{
	return (this->_is_signed);
}

void	Form::set_signed_status(bool is_signed)
{
	this->_is_signed = is_signed;
}

int	Form::get_grade_sign(void) const
{
	return (this->_grade_sign);
}

int	Form::get_grade_execute(void) const
{
	return (this->_grade_execute);
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high...");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low...");
}

void	Form::_check_grades(void)
{
	try
	{
		if (this->_grade_sign < 1 || this->_grade_execute < 1)
			throw Form::GradeTooHighException();
	}
	catch(const std::exception& e)
	{
		std::cerr
			<< e.what()
			<< std::endl;
	}

	try
	{
		if (this->_grade_sign > 150 || this->_grade_execute > 150)
			throw Form::GradeTooLowException();
	}
	catch(const std::exception& e)
	{
		std::cerr
			<< e.what()
			<< std::endl;
	}
}
