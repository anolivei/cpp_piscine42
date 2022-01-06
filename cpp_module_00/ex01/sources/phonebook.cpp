/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:22:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/06 01:10:21 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"
	/*
	Commands:

	ADD
	first_name
	last_name
	nickname
	phone_number
	darkest_secret

	SEARCH
		index | first_name | last_name | nickname |
	
	EXIT
	*/
Contacts	add_new_contact(void)
{
	Contacts	new_contact;
	std::string	info;

	std::cout << "First name: ";
	getline(std::cin, info);
	new_contact.set_first_name(info);
	return (new_contact);
}

int	main(void)
{
	Contacts	contact[8];
	std::string	command;
	int			i;

	std::cout << "42 Phonebook" << std::endl;
	getline(std::cin, command);
	i = 0;
	while (command != "EXIT" && command != "exit")
	{
		if (command == "ADD" || command == "add")
		{
			if (i == 8)
				i = 0;
			contact[i] = add_new_contact();
			std::cout << contact[i].get_first_name() << std::endl;
			i++;
		} 
		std::cout << i << std::endl;
		getline(std::cin, command);
	}
	std::cout << "bye" << std::endl;
	return (0);
}