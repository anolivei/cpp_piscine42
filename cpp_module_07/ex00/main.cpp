/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:36:14 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/06 23:12:12 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "template.hpp"
#include "Awesome.hpp"

int main( void ) {

	std::cout << "\n---- char ----\n" << std::endl;
	char char1 = 'a';
	char char2 = 'c';
	std::cout << "before swap:" << std::endl;
	std::cout << "char1 = " << char1 << ", char2 = " << char2 << std::endl;
	swap(char1, char2);
	std::cout << "after swap:" << std::endl;
	std::cout << "char1 = " << char1 << ", char2 = " << char2 << std::endl;
	std::cout << "min(char1, char2) = " << ::min(char1, char2) << std::endl;
	std::cout << "max(char1, char2) = " << ::max(char1, char2) << std::endl;

	std::cout << "\n---- string ----\n" << std::endl;
	std::string str1 = "Amon";
	std::string str2 = "Meow";
	std::cout << "before swap:" << std::endl;
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	swap(str1, str2);
	std::cout << "after swap:" << std::endl;
	std::cout << "str1 = " << str1 << ", str2 = " << str2 << std::endl;
	std::cout << "min(str1, str2) = " << ::min(str1, str2) << std::endl;
	std::cout << "max(str1, str2) = " << ::max(str1, str2) << std::endl;

	std::cout << "\n---- int ----\n" << std::endl;
	int int1 = 42;
	int int2 = 21;
	std::cout << "before swap:" << std::endl;
	std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
	swap( int1, int2 );
	std::cout << "after swap:" << std::endl;
	std::cout << "int1 = " << int1 << ", int2 = " << int2 << std::endl;
	std::cout << "min(int1, int2) = " << ::min(int1, int2) << std::endl;
	std::cout << "max(int1, int2) = " << ::max(int1, int2) << std::endl;

	std::cout << "\n--- float ----\n" << std::endl;
	float float1 = 4.2;
	float float2 = 2.1;
	std::cout << "before swap:" << std::endl;
	std::cout << "float1 = " << float1 << ", float2 = " << float2 << std::endl;
	swap(float1, float2);
	std::cout << "after swap:" << std::endl;
	std::cout << "float1 = " << float1 << ", float2 = " << float2 << std::endl;
	std::cout << "min(float1, float2) = " << ::min(float1, float2) << std::endl;
	std::cout << "max(float1, float2) = " << ::max(float1, float2) << std::endl;

	std::cout << "\n---- classes ----\n" << std::endl;
	Awesome awesome1(42);
	Awesome awesome2(21);
	std::cout << "before swap:" << std::endl;
	std::cout << "awesome1 = " << awesome1 << ", awesome2 = " << awesome2 << std::endl;
	swap(awesome1, awesome2);
	std::cout << "after swap:" << std::endl;
	std::cout << "awesome1 = " << awesome1 << ", awesome2 = " << awesome2 << std::endl;
	std::cout << "min(awesome1, awesome2) = " << min(awesome1, awesome2) << std::endl;
	std::cout << "max(awesome1, awesome2) = " << max(awesome1, awesome2) << std::endl;
}
