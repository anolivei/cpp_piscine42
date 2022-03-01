/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:19 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/21 14:31:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout
		<< "PresidentialPardonForm default constructor called"
		<< std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
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
	o << "something";
	return o;
}
