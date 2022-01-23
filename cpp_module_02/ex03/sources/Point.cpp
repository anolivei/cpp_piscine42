/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 02:48:03 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/23 04:41:00 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

/*
** constructors
*/

Point::Point(void)
{
	return ;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	return ;
}

Point::Point(const Point& copy) : _x(copy.get_x()), _y(copy.get_y())
{
	return ;
}

/*
** destructor
*/

Point::~Point(void)
{
	return ;
}

/*
** operator overload
*/

Point& Point::operator=(const Point& rhs)
{
	(void)rhs;
	return (*this);
}

/*
** getters
*/

const Fixed	Point::get_x(void) const
{
	return (this->_x);
}

const Fixed	Point::get_y(void) const
{
	return (this->_y);
}

/*
** external functions
*/

std::ostream&	operator<<(std::ostream& o, const Point& point)
{
	o
		<< '('
		<< point.get_x()
		<< "," 
		<< point.get_y()
		<< ')';
	return (o);
}
