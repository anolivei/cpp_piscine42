/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:11 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/22 19:21:31 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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

Fixed::Fixed(const int int_num)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
	this->_raw_bits = int_num << this->_fractional_bits;
	return ;
}

Fixed::Fixed(const float float_num)
{
	std::cout
		<< "Float constructor called"
		<< std::endl;
		this->_raw_bits = roundf(float_num * (1 << this->_fractional_bits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

Fixed&	Fixed::operator=(const Fixed& copy)
{
	std::cout
		<< "Copy assignment operator called"
		<< std::endl;
	if (this != &copy)
		this->_raw_bits = copy.getRawBits();
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return	((float)(this->_raw_bits / (float)(1 << this->_fractional_bits)));
}

int	Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

int const	Fixed::_fractional_bits = 8;


/*
** to better understand bitwise
**
** a = 10;
** b = a << 4;
** b = 10 * 2**4;
** b = 10 * 16;
** b = 160;
**
** a = 5;
** b = a >> 1;
** a = 0101 
** (drop right one and put a zero on the left)
** b = 0010;
** b = 2;
** taht is the same of 5 / 2
**
** 1 << this->_fractional_bits = pow(2, this->_fractional_bits) = 2^8 = 256
**
*/
