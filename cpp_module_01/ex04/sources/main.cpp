/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:11:56 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 02:43:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void	print_error_message(void)
{
	std::cout
			<< RED
			<< "[Error] You must pass three arguments like:" << std::endl
			<< "./replace filename string1 string2" << std::endl
			<< RESET;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		print_error_message();
	else
	{
		Replace	replace(argv[1], argv[2], argv[3]);
		std::cout
			<< replace.get_filename() << std::endl
			<< replace.get_new_filename() << std::endl
			<< replace.get_string1() << std::endl
			<< replace.get_string1() << std::endl;
	}
	return (0);
}
