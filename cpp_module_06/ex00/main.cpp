/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:56:50 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/03 21:45:13 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"
#include <iostream>

int main(int argc, char **argv) 
{
	if (argc != 2)
	{
		std::cout
			<< "[ERROR] Type one argument"
			<< std::endl;
		return (1);
	}
	try
	{
		ScalarConversion input(argv[1]);
		std::cout
			<< input
			<< std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
