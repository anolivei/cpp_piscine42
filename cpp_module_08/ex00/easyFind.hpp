/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:05:12 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/09 12:40:03 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> //std::find

class NoOccurrenceFound : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("No occurrence is found");
		}
};

template<typename T>
typename T::iterator easyFind(T &container, int toFind)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw NoOccurrenceFound();
	return (it);
}

#endif
