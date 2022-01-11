/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 02:36:41 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/10 21:03:44 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

void	show_all_contacts(Contacts contact[8], int num_contacts)
{
	int	i;

	i = 0;
	std::cout
		<< std::setfill(' ') << std::setw(10) << "id" << " | " 
		<< std::setfill(' ') << std::setw(10) << "First Name" << " | "
		<< std::setfill(' ') << std::setw(10) << "Last Name" << " | "
		<< std::setfill(' ') << std::setw(10) << "Nickname" << std::endl;
	while (i < num_contacts)
	{
		print_contacts(i + 1, contact[i].get_first_name(),
			contact[i].get_last_name(), contact[i].get_nickname());
		i++;
	}
}

void	choose_contact(Contacts contact[8], int num_contacts)
{
	int	id;

	std::cout << "Choose a contact id to display: ";
	while (!(std::cin >> id) || id < 1 || id > num_contacts)
	{
		std::cout 
			<< BOLD_RED << "Invalid id, choose a valid one: " << RESET;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}
	id--;
	if (id < num_contacts)
	{
		std::cout
			<< BLUE << "First name: " << RESET
			<< contact[id].get_first_name()
			<< std::endl;
		std::cout 
			<< BLUE << "Last name: " << RESET
			<< contact[id].get_last_name()
			<< std::endl;
		std::cout 
			<< BLUE << "Nickname: " << RESET
			<< contact[id].get_nickname()
			<< std::endl;
		std::cout 
			<< BLUE << "Phone number: " << RESET
			<< contact[id].get_phone_number()
			<< std::endl;
		std::cout
			<< BLUE << "Darkest secret: " << RESET
			<< contact[id].get_darkest_secret()
			<< std::endl;
	}
	std::cin.clear();
	std::cin.ignore(10000, '\n');
}

std::string trim(std::string info)
{
	if (info.length() >= 10)
		info = info.substr(0, 9).append(".");
	return (info);
}

void	print_contacts(int id, std::string first_name,
			std::string last_name, std::string nickname)
{
	std::cout
		<< std::setfill(' ') << std::setw(10) << id << " | " 
		<< std::setfill(' ') << std::setw(10) << trim(first_name) << " | "
		<< std::setfill(' ') << std::setw(10) << trim(last_name) << " | "
		<< std::setfill(' ') << std::setw(10) << trim(nickname) << std::endl;
}
