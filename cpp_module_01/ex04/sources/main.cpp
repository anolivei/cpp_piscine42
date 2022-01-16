/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:11:56 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 21:26:37 by anolivei         ###   ########.fr       */
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
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (argc != 4)
	{
		print_error_message();
		return (1);
	}
	Replace	replace(argv[1], argv[2], argv[3]);
	if (!replace.open_file(ifs))
		return (1);
	replace.read_file(ifs);
	replace.write_file(ofs);
	ifs.close();
	ofs.close();
	return (0);
}