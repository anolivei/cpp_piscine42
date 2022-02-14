/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:16:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/14 00:44:35 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) :
	_name("default"), _is_signed(false), _grade_sign(1), _grade_execute(1)
{
	std::cout
		<< "Form default constructor called"
		<< std::endl;
	return ;
}

Form::Form(const Form& obj)
{
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
	o
		<< "Form name: "
		<< i.get_name()
		<< " Signed: "
		<< i.get_signed_status()
		<< " Grade required to sign: "
		<< i.get_grade_sign()
		<< " Grade required to execute: "
		<< i.get_grade_execute();
	return o;
}

const std::string	Form::get_name(void) const
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

const int	Form::get_grade_sign(void) const
{
	return (this->_grade_sign);
}

const int	Form::get_grade_execute(void) const
{
	return (this->_grade_execute);
}
