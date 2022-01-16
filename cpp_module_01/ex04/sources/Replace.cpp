/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:06:45 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 23:27:51 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/*
** constructor and destructor
*/

Replace::Replace(char* filename, char* string1, char* string2)
{
	set_filename(filename);
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

const char*	Replace::get_filename(void) const
{
	return (this->_filename);
}

void	Replace::set_filename(char* filename)
{
	this->_filename = filename;
}

std::string	Replace::get_content(void) const
{
	return (this->_content);
}

void	Replace::set_content(std::string content)
{
	this->_content = content;
}

std::string	Replace::get_new_filename(void) const
{
	return (this->_new_filename);
}

void	Replace::set_new_filename(char* filename)
{
	char	new_filename[std::strlen(filename) + 1];
	size_t	i;

	i = 0;
	while (i < std::strlen(filename))
	{
		new_filename[i] = toupper(filename[i]);
		i++;
	}
	new_filename[i] = '\0';
	this->_new_filename = new_filename;
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
	this->_string2 = string2;
}

/*
** public functions
*/

bool	Replace::open_file(std::ifstream& ifs)
{
	ifs.open(get_filename());
	if (!ifs)
	{
		std::cerr
			<< RED
			<< "[Error] Can't open the file "
			<< get_filename() << std::endl
			<< "Try a valid one" << std::endl
			<< RESET;
		return (false);
	}
	return (true);
}

void	Replace::create_new_file(std::ifstream& ifs, std::ofstream& ofs)
{
	std::string	buffer;

	ofs.open(get_new_filename().c_str());
	while (std::getline(ifs, buffer))
	{
		set_content(buffer);
		replace();
		ofs << get_content() << std::endl;
	}
}

void	Replace::replace(void)
{
	size_t	i;

	i = get_content().find(get_string1());
	while (i != std::string::npos)
	{
		set_content(get_content().erase(i, get_string1().size()));
		set_content(get_content().insert(i, get_string2()));
		i = get_content().find(get_string1());
	}
}
