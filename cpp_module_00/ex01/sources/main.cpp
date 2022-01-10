/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:22:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/10 20:14:45 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	command;
	int			i;
	int			num_contacts;

	command = print_welcome_message(command);
	i = 0;
	num_contacts = 0;
	while (command != "EXIT" && command != "exit")
	{
		if (command == "ADD" || command == "add")
		{
			if (i == 8)
				i = 0;
			phonebook.contact[i] = add_new_contact();
			i++;
			if (num_contacts < 8)
				num_contacts++;
		}
		else if (command == "SEARCH" || command == "search")
		{
			if (num_contacts > 0)
			{
				show_all_contacts(phonebook.contact, num_contacts);
				choose_contact(phonebook.contact, num_contacts);
			}
			else
				std::cout << "Empty phonebook" << std::endl;
		}
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "Type your command: ";
		getline(std::cin, command);
	}
	std::cout << "Bye" << std::endl;
	return (0);
}

std::string	print_welcome_message(std::string command)
{
	std::cout << "Welcome to the 42 Phonebook" << std::endl;
	std::cout << "Type:" << std::endl 
			<< "ADD to add a new contact" << std::endl 
			<< "SEARCH to search a contact" << std::endl
			<< "EXIT to exit" << std::endl;
	std::cout << "Type your command: ";
	getline(std::cin, command);
	return (command);
}
