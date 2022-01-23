/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:11 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/22 21:37:39 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/*
** constructors
*/

Fixed::Fixed(void)
{
	this->_raw_bits = 0;
	return ;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
	return ;
}

Fixed::Fixed(const int int_num)
{
	this->_raw_bits = int_num << this->_fractional_bits;
	return ;
}

Fixed::Fixed(const float float_num)
{
		this->_raw_bits = roundf(float_num * (1 << this->_fractional_bits));
	return ;
}

/*
** destructor
*/

Fixed::~Fixed(void)
{
	return ;
}

/*
** operators overload
*/

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	if (this != &rhs)
		this->_raw_bits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed& rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed& rhs) const
{
	return (rhs.getRawBits() == this->getRawBits());
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& rhs) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	Fixed	result(this->toFloat() * rhs.toFloat());

	return (result);
}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	Fixed	result(this->toFloat() / rhs.toFloat());

	return (result);
}

Fixed	&Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;

	++(*this);
	return (old);
}

Fixed	&Fixed::operator--(void)
{
	this->_raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;

	--(*this);
	return (old);
}

/*
** getter and setter
*/

int	Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

/*
** member functions
*/

float	Fixed::toFloat(void) const
{
	return	((float)(this->_raw_bits / (float)(1 << this->_fractional_bits)));
}

int	Fixed::toInt(void) const
{
	return (this->_raw_bits >> this->_fractional_bits);
}

Fixed&	Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed&	Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	else
		return (rhs);
}

Fixed&	Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

const Fixed&	Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	else
		return (rhs);
}

/*
** fractional bits definition
*/

int const	Fixed::_fractional_bits = 8;

/*
** external functions
*/

std::ostream&	operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return (o);
}
