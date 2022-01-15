/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:06:45 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 02:44:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/*
** constructor and destructor
*/

Replace::Replace(char* filename, char* string1, char* string2)
{
	set_filename(filename);
	set_new_filename(filename);
	set_string1(string1);
	set_string2(string2);
}

Replace::~Replace(void)
{
	return ;
}

/*
** getters and setters
*/

std::string	Replace::get_filename(void) const
{
	return (this->_filename);
}

void	Replace::set_filename(char* filename)
{
	this->_filename = filename;
}

std::string	Replace::get_new_filename(void) const
{
	return (this->_new_filename);
}

void	Replace::set_new_filename(char* filename)
{
	for (size_t i = 0; i < std::strlen(filename); i++)
		filename[i] = toupper(filename[i]);
	this->_new_filename= filename;
	this->_new_filename.append(".replace");
}

std::string	Replace::get_string1(void) const
{
	return (this->_string1);
}

void	Replace::set_string1(char* string1)
{
	this->_string1 = string1;
}

std::string	Replace::get_string2(void) const
{
	return (this->_string2);
}

void Replace::set_string2(char* string2)
{
	this->_string1 = string2;
}
