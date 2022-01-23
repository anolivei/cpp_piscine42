/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 21:54:01 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/23 04:43:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& copy);
		~Point(void);

		Point& operator=(const Point& rhs);

		const Fixed	get_x(void) const;
		const Fixed	get_y(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Point& point);
bool	bsp( Point const a, Point const b, Point const c, Point const point);
Fixed	get_area(const Point &a, const Point &b, const Point &c);

#endif