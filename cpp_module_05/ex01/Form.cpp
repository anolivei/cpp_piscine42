/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:16:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/16 22:17:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("default"), _is_signed(false), _grade_sign(1), _grade_execute(1)
{
	_check_grades();
	std::cout
		<< "Form "
		<< get_name()
		<< " created by default: "
		<< *this
		<< std::endl;
	return ;
}

Form::Form(const Form& obj) :
	_name(obj.get_name()), _is_signed(obj.get_signed_status()),
	_grade_sign(obj.get_grade_sign()), _grade_execute(obj.get_grade_execute())
{
	_check_grades();
	std::cout
		<< "Form "
		<< get_name()
		<< " copied: "
		<< *this
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
		<< "Form "
		<< get_name()
		<< " created: "
		<< *this
		<< std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout
		<< "Form "
		<< get_name()
		<< " destructor called"
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
		<< ", the grade required to sign is "
		<< i.get_grade_sign()
		<< ", the grade required to execute is "
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

int	Form::get_grade_sign(void) const
{
	return (this->_grade_sign);
}

int	Form::get_grade_execute(void) const
{
	return (this->_grade_execute);
}

void	Form::be_signed(Bureaucrat& bureaucrat)
{
	if (bureaucrat.get_grade() > _grade_sign)
		throw GradeTooLowException();
	_is_signed = true;
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
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
}
