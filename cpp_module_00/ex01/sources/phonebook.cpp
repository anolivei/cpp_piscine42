/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:22:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/07 01:18:22 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

void	print_contacts(int id, std::string first_name,
			std::string last_name, std::string nickname)
{
	std::cout << id << " | " << first_name << " | " << last_name << " | "
		<< nickname << std::endl;
}

void	show_all_contacts(Contacts contact[8], int num_contacts)
{
	int	i;

	i = 0;
	while (i < num_contacts)
	{
		print_contacts(i + 1, contact[i].get_first_name(),
			contact[i].get_last_name(), contact[i].get_nickname());
		i++;
	}
}

void	choose_contact(Contacts contact[8], int num_contacts)
{
	int			id;

	std::cout << "Choose a contact id to display: ";
	while (!(std::cin >> id) || id < 1 || id > num_contacts)
		std::cout << "Invalid id, choose a valid one: ";
	id--;
	if (id < num_contacts)
	{
		std::cout << "First name: " << contact[id].get_first_name() << std::endl;
		std::cout << "Last name: " << contact[id].get_last_name() << std::endl;
		std::cout << "Nickname: " << contact[id].get_nickname() << std::endl;
		std::cout << "Phone number: " << contact[id].get_phone_number() << std::endl;
		std::cout << "Darkest secret: " << contact[id].get_darkest_secret() << std::endl;		
	}
}

Contacts	add_new_contact(void)
{
	Contacts	new_contact;
	std::string	info;

	std::cout << "First name: ";
	getline(std::cin, info);
	new_contact.set_first_name(info);

	std::cout << "Last name: ";
	getline(std::cin, info);
	new_contact.set_last_name(info);

	std::cout << "Nickname: ";
	getline(std::cin, info);
	new_contact.set_nickname(info);

	std::cout << "Phone number: ";
	getline(std::cin, info);
	new_contact.set_phone_number(info);

	std::cout << "Darkest secret: ";
	getline(std::cin, info);
	new_contact.set_darkest_secret(info);

	return (new_contact);
}

int	main(void)
{
	Contacts	contact[8];
	std::string	command;
	int			i;
	int			num_contacts;

	std::cout << "42 Phonebook" << std::endl;
	getline(std::cin, command);
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
			show_all_contacts(contact, num_contacts);
			choose_contact(contact, num_contacts);
		}
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "And now? ";
		getline(std::cin, command);
	}
	std::cout << "bye" << std::endl;
	return (0);
}