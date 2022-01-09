/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 02:34:57 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 22:09:22 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

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
