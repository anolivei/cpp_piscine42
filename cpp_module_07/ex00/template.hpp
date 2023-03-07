/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:28:49 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/06 22:33:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

template<typename T>
void swap(T &x, T &y)
{
	T temp;
	
	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	if (x <= y)
		return x;
	return y;
}

template<typename T>
T const &max(T const &x, T const &y)
{
	if (x >= y)
		return x;
	return y;
}

#endif
