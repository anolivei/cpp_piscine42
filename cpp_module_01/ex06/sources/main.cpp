/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:24:22 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/16 02:57:56 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char** argv)
{
	Karen		karen;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout
			<< LRED
			<< "Type an arg to filter what Karen says:"
			<< std::endl
			<< "It can be DEBUG, INFO, WARNING or ERROR to filter "
			<< "or anything to total ignore"
			<< std::endl
			<< RESET;
		return (1);
	}
	else
	{
		for (int i = 0; i < 4; i++)
		{
			if (argv[1] == levels[i])
			{
				karen.complain(argv[1]);
				return (0);
			}
		}
	}
	std::cout
			<< GRAY
			<< "A lot of mi mi mis that you don't care..."
			<< std::endl
			<< RESET;
	return (0);
}
