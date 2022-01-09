/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:22:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 22:09:33 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

int	main(void)
{
	Contacts	contact[8];
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
			contact[i] = add_new_contact();
			i++;
			if (num_contacts < 8)
				num_contacts++;
		}
		else if (command == "SEARCH" || command == "search")
		{
			if (num_contacts > 0)
			{
				show_all_contacts(contact, num_contacts);
				choose_contact(contact, num_contacts);
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
