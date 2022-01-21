/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:11 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/21 16:56:49 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed_01.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	this->_raw_bits = 0;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int num)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
}

Fixed::Fixed(const float num)
{
	
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout
		<< "Copy assignment operator called"
		<< std::endl;
	if (this != &copy)
		this->_raw_bits = copy.getRawBits();
	return (*this);
}
std::ostream & operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.getRawBits();
	return o;
}

int Fixed::getRawBits(void) const
{
	std::cout
		<< "getRawBits member function called"
		<< std::endl;
	return (this->_raw_bits);
}

void    Fixed::setRawBits(int const raw)
{
	std::cout
		<< "setRawBits member function called"
		<< std::endl;
	this->_raw_bits = raw;
	return ;
}

int const	Fixed::_fractional_bits = 8;
