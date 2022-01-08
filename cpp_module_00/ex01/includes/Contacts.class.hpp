/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:22:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 02:44:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_CLASS_HPP
# define CONTACTS_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contacts
{
	public:

		std::string	get_first_name(void) const;
		void		set_first_name(std::string first_name);

		std::string	get_last_name(void) const;
		void		set_last_name(std::string last_name);

		std::string	get_nickname(void) const;
		void		set_nickname(std::string nickname);		

		std::string	get_phone_number(void) const;
		void		set_phone_number(std::string phone_number);

		std::string	get_darkest_secret(void) const;
		void		set_darkest_secret(std::string darkest_secret);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

/*
** phonebook.cpp
*/
std::string	print_welcome_message(std::string command);

/*
** add.cpp
*/
Contacts	add_new_contact(void);

/*
** search.cpp
*/
void		show_all_contacts(Contacts contact[8], int num_contacts);
void		choose_contact(Contacts contact[8], int num_contacts);
void		print_contacts(int id, std::string first_name,
				std::string last_name, std::string nickname);
std::string	trim(std::string info);

#endif