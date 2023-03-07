/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:21:33 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/07 15:13:58 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arrayAddress, size_t arrayLength, void (function)(T &arrayElement))
{
	for (size_t i = 0; i < arrayLength; i++)
		function(arrayAddress[i]);
}

template<typename T>
void iter(T const *arrayAddress, size_t arrayLength, void (function)(T const &arrayElement))
{
	for (size_t i = 0; i < arrayLength; i++)
		function(arrayAddress[i]);
}

template<typename T>
void addOne(T &n)
{
	n += 1.0;
}

template<typename T>
void doubleValue(T &n)
{
	n *= 2;
}

template<typename T>
void print(T const &n)
{
	std::cout << n << std::endl;
}

#endif
