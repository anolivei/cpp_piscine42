/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:11 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/21 23:12:43 by anolivei         ###   ########.fr       */
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

Fixed::Fixed(const int num)
{
	std::cout
		<< "Int constructor called"
		<< std::endl;
	this->_raw_bits = num << this->_fractional_bits;
	return ;
}

Fixed::Fixed(const float num)
{
	int	power;

	power = pow(2, this->_fractional_bits);
	std::cout
		<< "Float constructor called"
		<< std::endl;
		this->_raw_bits = roundf(num * power);
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
	int		power;
	float	ret;

	power = pow(2, this->_fractional_bits);
	ret = (float)this->_raw_bits / power;
	return (ret);
}

int	Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

int const	Fixed::_fractional_bits = 8;
