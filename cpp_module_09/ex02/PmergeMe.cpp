/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:05 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 22:29:51 by anolivei         ###   ########.fr       */
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
	_verifyDuplicates();
	_deque = _parseArgsDeque(argc,argv);

	_printBeforeAfter();

	_insertionSortVector();
	_insertionSortDeque();

	_sorted = true;
	_printBeforeAfter();

	_printTime("vector");
	_printTime("deque");
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
		this->_size = obj._size;
		this->_sorted = obj._sorted;
		this->_vector = obj._vector;
		this->_deque = obj._deque;
		this->_deltaTimeVector = obj._deltaTimeVector;
		this->_deltaTimeDeque = obj._deltaTimeDeque;
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i)
{
	o 
		<< "Vector delta time: " << i.getVectorDeltaTime() << std::endl
		<< "Deque delta time: " << i.getDequeDeltaTime();
	return o;
}

/*
** Getters
*/

double	PmergeMe::getVectorDeltaTime(void) const
{
	return (this->_deltaTimeVector);
}
double	PmergeMe::getDequeDeltaTime(void) const
{
	return (this->_deltaTimeDeque);
}

/*
** Parse and verify input
*/

std::vector<int> PmergeMe::_parseArgsVector(int argc, char **argv)
{
	std::vector<int>	args;
	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		int value = atoi(arg.c_str());
		if (value <= 0)
			throw invalidArgumentError();
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
			throw invalidArgumentError();
		args.push_back(value);
	}
	return (args);
}

void PmergeMe::_verifyDuplicates(void)
{
	std::set<int> numSet;
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); ++it) {
		int num = *it;
		if (numSet.find(num) != numSet.end())
			throw duplicatesError();
		numSet.insert(num);
	}
}

/*
** Sort
*/

void	PmergeMe::_insertionSortVector(void)
{
	double tBegin = _getTime();
	std::vector<int>::iterator i, j;
	for (i = _vector.begin(); i != _vector.end(); ++i)
	{
		std::vector<int>::value_type tmp = *i;
		for (j = i; j != _vector.begin() && tmp < *(j - 1); --j)
		{
			*j = *(j - 1);
		}
		*j = tmp;
	}
	_deltaTimeVector = _deltaTime(tBegin);
}

void	PmergeMe::_insertionSortDeque(void)
{
	double tBegin = _getTime();
	std::deque<int>::iterator i, j;
	for (i = _deque.begin(); i != _deque.end(); ++i)
	{
		std::deque<int>::value_type tmp = *i;
		for (j = i; j != _deque.begin() && tmp < *(j - 1); --j)
		{
			*j = *(j - 1);
		}
		*j = tmp;
	}
	_deltaTimeDeque = _deltaTime(tBegin);
}

/*
** Manage time
*/

double	PmergeMe::_getTime(void)
{
	struct timeval	time;

	gettimeofday(&time, NULL);
	return ((time.tv_sec * 1000) + (time.tv_usec * 0.001));
}

double	PmergeMe::_deltaTime(long long time)
{
	if (time > 0)
		return (_getTime() - time);
	return (0);
}

/*
** Printers
*/

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

void	PmergeMe::_printTime(std::string vectorDeque) const
{
	double delta;
	if (vectorDeque == "vector")
		delta = _deltaTimeVector;
	else if (vectorDeque == "deque")
		delta = _deltaTimeDeque;
	else
		throw containerTypeError();
	std::cout 
		<< "Time to process a range of " << _size 
		<< " elements with std::" << vectorDeque << ": "
		<< std::fixed << std::setprecision(5) << delta << " us" << std::endl;
}
