/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:11 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/21 10:39:04 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::~Fixed(void)
{
    return ;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
    if (this != &copy)
        this->_raw_bits = copy.get_raw_bits();
    return (*this);
}

int Fixed::get_raw_bits(void) const
{
    return (this->_raw_bits);
}

void    Fixed::set_raw_bits(int const raw)
{
    this->_raw_bits = raw;
    return ;
}

int const	Fixed::_fractional_bits = 8;
