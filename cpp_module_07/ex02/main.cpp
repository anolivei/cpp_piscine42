/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:18:23 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/08 14:19:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
	std::cout << "\n--- int array test ---\n" << std::endl;
	Array<int> intArray(5);

	std::cout << "\n--- out of bounds test ----\n" << std::endl;
	for (unsigned int i = 0; i < intArray.size() + 1; i++)
	{
		try
		{
			std::cout << "index: " << i << " value: " << intArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	std::cout << "\n--- assigning values (0 - 4) ---\n" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
	{
		try
		{
			intArray[i] = i;
			std::cout << "index: " << i << " value: " << intArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;;
		}
	}

	std::cout << "\n--- changing a value ---\n" << std::endl;
	std::cout << "old value:" << std::endl;
	std::cout << "index: 2 value: " << intArray[2] << std::endl;
	intArray[2] = 42;
	std::cout << "new value (42):" << std::endl;
	std::cout << "index: 2 value: " << intArray[2] << std::endl;

	std::cout << "\n--- copy test ---\n" << std::endl;
	Array<int> intArrayCopy(intArray);
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;
	intArray[2] = 7;
	std::cout << "intArray[2]:" << intArray[2] << std::endl;
	std::cout << "intArrayCopy[2]:" << intArrayCopy[2] << std::endl;

	std::cout << "\n--- testing array too small to copy ---\n" << std::endl;
	Array<int> smallArray(2);
	smallArray = intArray;

	std::cout << "\n--- empty constructor and accessing test ---\n" << std::endl;
	Array<int> emptyArray = Array<int>();
	try
	{
		std::cout << emptyArray[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "emptyArray size: " << emptyArray.size() << std::endl;

	std::cout << "\n--- char array test ---\n" << std::endl;
	Array<char> charArray(3);
	for (unsigned int i = 0; i < charArray.size(); i++)
	{
		try
		{
			charArray[i] = 'a' + i;
			std::cout << charArray[i] << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;;
		}
	}
}
