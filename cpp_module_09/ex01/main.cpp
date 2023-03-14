/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:45:55 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 15:36:04 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	RPN	rpn;

	if (argc != 2)
	{
		std::cerr
			<< "Usage: "
			<< argv[0]
			<< " <RPN expression>"
			<< std::endl;
	}
	else
	{
		rpn.reversePolishNotation(argv[1]);
		std::cout << rpn << std::endl;
	}
}
