/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:06 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/23 04:42:51 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

int	main(void)
{
	std::string status;

	Point a(3, 3);
	Point b(7, 4);
	Point c(8, 8);
	Point point[6] = {
						Point(6, 5), // inside
						Point(7, 6), // inside
						Point(5, 5), // inside (on border)
						Point(3, 5), // outside
						Point(-1, -1), // outside
						Point(1.5f, 2.5f), // outside
					};
	std::cout 
		<< "Triangle coordinates:"
		<< std::endl
		<< "a: " << a
		<< " b: " << b
		<< " c: " << c
		<< std::endl;
	for (int i = 0;  i < 6; i++)
	{
		if (bsp(a, b, c, point[i]) == 0)
			status = " is outside";
		else
			status = " is inside";
		std::cout 
			<< "Point "
			<< point[i]
			<< status
			<< std::endl;
	}
	return 0;
}
