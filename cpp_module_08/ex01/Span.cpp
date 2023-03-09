/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:47:22 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/09 18:58:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm> //sort, min_element, max_element

Span::Span(void) : _n(0)
{
	return ;
}

Span::Span(unsigned int N) : _n(N)
{
	return ;
}

Span::Span(const Span& obj)
{
	*this = obj;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span& Span::operator=(const Span& obj)
{
	if (this != &obj)
	{
		this->_n = obj._n;
		this->_values = obj._values;
	}
	return (*this);
}

void	Span::addNumber(int value)
{
	if (_values.size() >= _n)
		throw IsFullException();
	_values.push_back(value);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (static_cast<unsigned int>(_values.size() + std::distance(begin, end)) > _n)
		throw IsFullException();
	_values.insert(_values.end(), begin, end);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int shortestSpan;
	std::vector<int> dif;

	if (_values.size() < 2)
		throw NoSpanException();
	std::sort(_values.begin(), _values.end());
	for (int i = 1; i < static_cast<int>(_values.size()); i++)
		dif.push_back(std::abs(_values[i] - _values[i - 1]));
	shortestSpan = *std::min_element(dif.begin(), dif.end());
	return (shortestSpan);
}

unsigned int	Span::longestSpan(void)
{
	int	max;
	int	min;

	if (_values.size() < 2)
		throw NoSpanException();
	max = *std::max_element(_values.begin(), _values.end());
	min = *std::min_element(_values.begin(), _values.end());
	return (max - min);
}


std::ostream&	operator<<(std::ostream& o, Span& i)
{
	try
	{
		unsigned int longest = i.longestSpan();
		unsigned int shortest = i.shortestSpan();
		o 
			<< "longest Span: " << longest << std::endl
			<< "shortest Span: " << shortest;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return o;
}
