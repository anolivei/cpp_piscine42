/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:05:21 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/09 15:18:23 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyFind.hpp"
#include <iostream>

#include <vector>
#include <deque>
#include <list>

void vectorTest(void)
{
	int arr[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(arr[i]);
	std::vector<int>::iterator itr = vec.begin();
	int i = 0;
	while (itr != vec.end())
	{
		std::cout <<"index: " << i << " value: " << *itr << std::endl;
		itr++;
		i++;
	}
	std::cout << "easy find 89" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyFind(vec, 89);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "easy find 999" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyFind(vec, 999);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(vec.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void dequeTest(void)
{
	int arr[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
	std::deque<int> deq;
	for (int i = 0; i < 10; i++)
		deq.push_front(arr[i]);
	std::deque<int>::iterator itr = deq.begin();
	int i = 0;
	while (itr != deq.end())
	{
		std::cout <<"index: " << i << " value: " << *itr << std::endl;
		itr++;
		i++;
	}
	std::cout << "easy find 54" << std::endl;
	try
	{
		std::deque<int>::iterator it = easyFind(deq, 54);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(deq.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "easy find 999" << std::endl;
	try
	{
		std::deque<int>::iterator it = easyFind(deq, 999);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(deq.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void listTest(void)
{
	int arr[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
	std::list<int> lis;
	for (int i = 0; i < 10; i++)
		lis.push_front(arr[i]);
	lis.sort();
	std::list<int>::iterator itr = lis.begin();
	int i = 0;
	while (itr != lis.end())
	{
		std::cout <<"index: " << i << " value: " << *itr << std::endl;
		itr++;
		i++;
	}
	std::cout << "easy find 67" << std::endl;
	try
	{
		std::list<int>::iterator it = easyFind(lis, 67);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(lis.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "easy find 999" << std::endl;
	try
	{
		std::list<int>::iterator it = easyFind(lis, 999);
		std::cout << "found: " << *it << std::endl;
		std::cout << "at index: " << std::distance(lis.begin(), it) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


int main(void)
{
	std::cout << "\n---- Vector Test ----\n" << std::endl;
	vectorTest();
	std::cout << "\n---- Deque Test ----\n" << std::endl;
	dequeTest();
	std::cout << "\n---- List Test ----\n" << std::endl;
	listTest();
}
