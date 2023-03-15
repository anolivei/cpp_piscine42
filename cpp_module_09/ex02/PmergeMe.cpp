/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:05 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 14:23:11 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void) : _sorted(false)
{
	return ;
}

PmergeMe::PmergeMe(int argc, char **argv) : _sorted(false)
{
	_list = _parseArgsList(argc, argv);
	_vector = _parseArgsVector(argc,argv);
	_print();
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
		this->_list = obj._list;
		this->_vector = obj._vector;
	}
	return (*this);
}

unsigned int	PmergeMe::getSize(void) const
{
	return (this->_size);
}

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i)
{
	o 
		<< "Time to process a range of " << i.getSize() << "elements with std::vector" << ":" << 0.00031 << "us"
		<< "Time to process a range of " << i.getSize() << "elements with std::list" << ":" << 0.00031 << "us";
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

std::list<int> PmergeMe::_parseArgsList(int argc, char **argv)
{
	std::list<int>	args;
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

void	PmergeMe::_print(void)
{
	if (_sorted == false)
		std::cout << "Before: ";
	else
		std::cout << "After:  ";
	std::vector<int>::iterator it = _vector.begin();
	std::vector<int>::iterator ite = _vector.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
}
