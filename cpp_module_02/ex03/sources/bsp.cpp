/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:00:34 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/23 04:15:48 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed abc = get_area(a, b, c);
	Fixed abp = get_area(a, b, point);
	Fixed acp = get_area(a, c, point);
	Fixed bcp = get_area(b, c, point);

	if(abc == abp + acp + bcp)
		return (true);
	return (false);
}

Fixed get_area(const Point &a, const Point &b, const Point &c)
{
	Fixed base1 = a.get_x() * (b.get_y() - c.get_y());
	Fixed base2 = b.get_x() * (c.get_y() - a.get_y());
	Fixed base3 = c.get_x() * (a.get_y() - b.get_y());
	Fixed sum_area = Fixed(base1 + base2 + base3).toFloat();
	if (sum_area < 0)
		sum_area = sum_area * Fixed(-1);
	return (sum_area);
}
