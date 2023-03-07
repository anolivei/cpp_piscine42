/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:59:14 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/07 15:17:47 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Awesome.hpp"

Awesome::Awesome(void)
{
	return ;
}

Awesome::Awesome(int n): _n(n)
{
	return ;
}

Awesome::Awesome(const Awesome& obj)
{
	*this = obj;
	return ;
}

Awesome::~Awesome(void)
{
	return ;
}

Awesome& Awesome::operator=(const Awesome& obj)
{
	if (this != &obj)
	{
		this->_n = obj.get_n();
	}
	return (*this);
}

int Awesome::get_n(void) const
{
	return (this->_n);
}

void Awesome::set_n(int n)
{
	this->_n = n;
}

float Awesome::operator+=(int obj)
{
	return (this->_n += obj);
}

float Awesome::operator*=(int obj)
{
	return (this->_n *= obj);
}

bool	Awesome::operator>(Awesome const &obj) const
{
	return (this->get_n() > obj.get_n());
}

bool	Awesome::operator>=(Awesome const &obj) const
{
	return (this->get_n() >= obj.get_n());
}

bool	Awesome::operator<(Awesome const &obj) const
{
	return (this->get_n() < obj.get_n());
}

bool	Awesome::operator<=(Awesome const &obj) const
{
	return (this->get_n() <= obj.get_n());
}

bool	Awesome::operator==(Awesome const &obj) const
{
	return (this->get_n() == obj.get_n());
}

bool	Awesome::operator!=(Awesome const &obj) const
{
	return (this->get_n() != obj.get_n());
}

std::ostream&	operator<<(std::ostream& o, const Awesome& i)
{
	o << i.get_n();
	return o;
}
