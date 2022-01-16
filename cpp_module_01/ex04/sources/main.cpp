/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:11:56 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 23:07:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Replace.hpp"

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
	replace.set_new_filename(argv[1]);
	replace.create_new_file(ifs, ofs);
	ifs.close();
	ofs.close();
	return (0);
}
