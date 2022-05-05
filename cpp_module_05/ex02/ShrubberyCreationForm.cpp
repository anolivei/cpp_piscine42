/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:06 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/05 09:24:17 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** Constructors and destructor
*/

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout
		<< "ShrubberyCreationForm default constructor called"
		<< std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout
		<< "ShrubberyCreationForm"
		<< target
		<< "constructor called"
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

/*
** Operator overloads
*/

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	if (this != &obj)
	{
		this->_target = obj.get_target();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const ShrubberyCreationForm& i)
{
	o << "Target: "
	<< i.get_target();
	return o;
}

/*
** Getters
*/
std::string ShrubberyCreationForm::get_target(void) const
{
	return (this->_target);
}

/*
** Public methods
*/

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	std::ofstream	file;

	this->check_executor(executor);
	file.open(this->_target + "_shrubbery");
	for (int i = 0; i < 3; i++)
	{
		file << "          &&& &&  & &&" << std::endl;
		file << "      && &\/&\|& ()|/ @, &&" << std::endl;
		file << "      &\/(/&/&||/& /_/)_&/_&" << std::endl;
		file << "   &() &\/&|()|/&\/ '%' & ()" << std::endl;
		file << "  &_\_&&_\ |& |&&/&__%_/_& &&" << std::endl;
		file << "&&   && & &| &| /& & % ()& /&&" << std::endl;
		file << " ()&_---()&\&\|&&-&&--%---()~" << std::endl;
		file << "     &&     \|||" << std::endl;
		file << "             |||" << std::endl;
		file << "             |||" << std::endl;
		file << "             |||" << std::endl;
		file << "       , -=-~  .-^- _" << std::endl;
		file << "aom90         `" << std::endl;
		file << std::endl;
	}
	file.close();
}
