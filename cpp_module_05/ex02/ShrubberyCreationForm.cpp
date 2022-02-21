/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:06 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/16 23:30:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
	std::cout
		<< "ShrubberyCreationForm default constructor called"
		<< std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
	std::cout
		<< "ShrubberyCreationForm copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout
		<< "ShrubberyCreationForm destructor called"
		<< std::endl;
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ShrubberyCreationForm& i)
{
	o << "something";
	return o;
}
