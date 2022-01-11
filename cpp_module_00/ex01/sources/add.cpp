/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 02:34:57 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/10 21:03:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"

Contacts	add_new_contact(void)
{
	Contacts	new_contact;
	std::string	info;

	std::cout << BLUE << "First name: " << RESET;
	getline(std::cin, info);
	new_contact.set_first_name(info);
	std::cout << BLUE << "Last name: " << RESET;
	getline(std::cin, info);
	new_contact.set_last_name(info);
	std::cout << BLUE << "Nickname: " << RESET;
	getline(std::cin, info);
	new_contact.set_nickname(info);
	std::cout << BLUE << "Phone number: " << RESET;
	getline(std::cin, info);
	new_contact.set_phone_number(info);
	std::cout << BLUE << "Darkest secret: " << RESET;
	getline(std::cin, info);
	new_contact.set_darkest_secret(info);
	return (new_contact);
}
