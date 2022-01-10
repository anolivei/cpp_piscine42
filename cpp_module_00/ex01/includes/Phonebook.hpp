/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:59:40 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/10 20:14:15 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Contacts.hpp"

class Phonebook
{
	public:

		Phonebook(void);
		~Phonebook(void);

		Contacts	contact[8];
};

/*
** phonebook.cpp
*/
int			main(void);
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