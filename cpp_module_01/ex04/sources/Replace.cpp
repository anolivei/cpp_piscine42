/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:06:45 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 21:38:42 by anolivei         ###   ########.fr       */
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

int	Replace::get_len(void) const
{
	return (this->_len);
}

void	Replace::set_len(int len)
{
	this->_len = len;
}

std::string	Replace::get_new_filename(void) const
{
	return (this->_new_filename);
}

void	Replace::set_new_filename(char* filename)
{
	char	new_filename[std::strlen(filename)];

	for (size_t i = 0; i < std::strlen(filename); i++)
		new_filename[i] = toupper(filename[i]);
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

void	Replace::read_file(std::ifstream& ifs)
{
	char *buffer;

	ifs.seekg(0, ifs.end);
	set_len(ifs.tellg());
	buffer = new char[get_len()];
	ifs.seekg(0);
	ifs.read(buffer, get_len());
	set_content(buffer);
}

void	Replace::write_file(std::ofstream& ofs)
{
	ofs.open(get_new_filename().c_str());
	replace();
	ofs.write(get_content().c_str(), get_len());
}

void	Replace::replace(void)
{
	for (size_t i = 0; i != std::string::npos;
			i = get_content().find(get_string1(), i + 1))
		if (i != std::string::npos && i != 0)
		{
			set_content(get_content().erase(i, get_string1().length()));
			set_content(get_content().insert(i, get_string2()));
		}
	set_len(get_content().length());
}
