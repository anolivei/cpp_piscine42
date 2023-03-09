/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:47:18 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/09 18:52:48 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& obj);
		virtual ~Span(void);

		void	addNumber(int value);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		Span&	operator=(const Span& obj);

	private:
		unsigned int		_n;
		std::vector<int>	_values;

	protected:
		class IsFullException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span is full, can't add a new element");
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Span can't be found.");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, Span& i);

#endif
