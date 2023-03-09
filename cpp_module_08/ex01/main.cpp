/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:25:32 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/09 20:50:32 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <climits>
#include <cstdlib>

void	testFull(void)
{
	std::cout << "\n---- Full ----" << std::endl;
	Span test(5);
	std::vector<int> vector(6, 42);
	try
	{
		test.addNumber(vector.begin(), vector.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl; //exception is full
	}
}

void	testEmpty(void)
{
	std::cout << "\n---- Empty ----" << std::endl;
	Span test(5);
	std::cout << test << std::endl; //exception not found
}

void	testOneElements(void)
{
	std::cout << "\n---- One Element ----" << std::endl;
	Span test(5);
	test.addNumber(42);
	std::cout << test << std::endl; //exception not found
}

void	testTwoElements(void)
{
	std::cout << "\n---- Two Elements ----" << std::endl;
	Span test(5);
	test.addNumber(10);
	test.addNumber(20);
	std::cout << test << std::endl; //longest: 10 shortest: 10
}

void	testTenElements(void)
{
	std::cout << "\n---- Ten Elements ----" << std::endl;
	Span test(10);
	int myInts[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));
	test.addNumber(vector.begin(), vector.end());
	std::cout << test << std::endl; //longest: 88 shortest: 2
}

void	testTenThousandElements(void)
{
	std::cout << "\n---- Ten Thousand Elements ----" << std::endl;
	srand(time(NULL));
	Span test(10000);
	std::vector<int> vector(10000);
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		*it = rand() % INT_MAX;
	test.addNumber(vector.begin(), vector.end());
	std::cout << test << std::endl; //random
}

void	testEvenBetterElements(void)
{
	std::cout << "\n---- Twenty Thousand Elements ----" << std::endl;
	srand(time(NULL));
	Span test(20000);
	std::vector<int> vector(20000);
	for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); it++)
		*it = rand() % INT_MAX;
	test.addNumber(vector.begin(), vector.end());
	std::cout << test << std::endl; //random
}

void	testCopyElements(void)
{
	std::cout << "\n---- Copy Element ----" << std::endl;
	Span test(10);
	int myInts[] = { 1, 5, 67, 89, 23, 50, 33, 79, 54, 77 };
	std::vector<int> vector(myInts, myInts + sizeof(myInts) / sizeof(int));
	test.addNumber(vector.begin(), vector.end());
	Span copy1(test);
	Span copy2 = test;
	std::cout << "Copy1" << std::endl;
	std::cout << copy1 << std::endl; //longest: 88 shortest: 2
	std::cout << "Copy2" << std::endl;
	std::cout << copy2 << std::endl << std::endl; //longest: 88 shortest: 2
}

int main(void)
{
	testFull();
	testEmpty();
	testOneElements();
	testTwoElements();
	testTenElements();
	testTenThousandElements();
	testEvenBetterElements();
	testCopyElements();
	return 0;
}
