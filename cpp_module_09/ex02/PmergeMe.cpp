/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:05 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 17:42:04 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _size(0), _sorted(false)
{
	return ;
}

PmergeMe::PmergeMe(int argc, char **argv) : _size(argc - 1), _sorted(false)
{
	_vector = _parseArgsVector(argc,argv);
	_deque = _parseArgsDeque(argc,argv);
	_printBeforeAfter();

	_insertionSortVector();
	_insertionSortDeque();

	_sorted = true;
	_printBeforeAfter();

	std::cout << "Time to process a range of " << _size << " elements with std::vector: " << std::fixed << std::setprecision(5) << _deltaTimeVector << " us" << std::endl;
	std::cout << "Time to process a range of " << _size << " elements with std::deque: " << std::fixed << std::setprecision(5) << _deltaTimeDeque << " us" << std::endl;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe& obj)
{
	*this = obj;
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& obj)
{
	if (this != &obj)
	{
		this->_vector = obj._vector;
		this->_deque = obj._deque;
		this->_sorted = obj._sorted;
		this->_size = obj._size;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i)
{
	o << "oi";
	(void)i;
	return o;
}

std::vector<int> PmergeMe::_parseArgsVector(int argc, char **argv)
{
	std::vector<int>	args;
	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		int value = atoi(arg.c_str());
		if (value <= 0)
			throw invalidArgument();
		args.push_back(value);
	}
	return (args);
}

std::deque<int> PmergeMe::_parseArgsDeque(int argc, char **argv)
{
	std::deque<int>	args;
	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		int value = atoi(arg.c_str());
		if (value <= 0)
			throw invalidArgument();
		args.push_back(value);
	}
	return (args);
}

void	PmergeMe::_printBeforeAfter(void)
{
	if (_sorted == false)
		std::cout << "Before: ";
	else
		std::cout << "After:  ";
	std::vector<int>::iterator it = _vector.begin();
	std::vector<int>::iterator ite = _vector.end();
	while (it != ite)
	{
		std::cout << " " << *it;
		++it;
	}
	std::cout << std::endl;
}

void	PmergeMe::_insertionSortVector(void)
{
	clock_t tBegin, tEnd;
	tBegin = clock();
	std::vector<int>::iterator i, j;
	for (i = _vector.begin(); i != _vector.end(); ++i)
	{
		std::vector<int>::value_type tmp = *i;
		for (j = i; j != _vector.begin() && tmp < *(j-1); --j)
		{
			*j = *(j-1);
		}
		*j = tmp;
	}
	tEnd = clock();
	_deltaTimeVector = ((double)(tEnd - tBegin)) / CLOCKS_PER_SEC * 1000000;
	_deltaTimeVector = ((double)((int)(_deltaTimeVector * 100000 + 0.5))) / 100000;
}

void	PmergeMe::_insertionSortDeque(void)
{
	clock_t tBegin, tEnd;
	tBegin = clock();
	std::deque<int>::iterator i, j;
	for (i = _deque.begin(); i != _deque.end(); ++i)
	{
		std::deque<int>::value_type tmp = *i;
		for (j = i; j != _deque.begin() && tmp < *(j-1); --j)
		{
			*j = *(j-1);
		}
		*j = tmp;
	}
	tEnd = clock();
	_deltaTimeDeque = ((double)(tEnd - tBegin)) / CLOCKS_PER_SEC * 1000000;
	_deltaTimeDeque = ((double)((int)(_deltaTimeDeque * 100000 + 0.5))) / 100000;
}
