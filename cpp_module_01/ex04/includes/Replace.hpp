/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:06:42 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 23:09:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstring>

# define RED	"\e[0;31m"
# define RESET	"\e[0m"

class Replace
{
	public:
		Replace(char* filename, char* string1, char* string2);
		~Replace();
		const char*	get_filename(void) const;
		void		set_filename(char* filename);
		std::string	get_content(void) const;
		void		set_content(std::string content);
		std::string	get_new_filename(void) const;
		void		set_new_filename(char* filename);
		std::string	get_string1(void) const;
		void		set_string1(char* string1);
		std::string	get_string2(void) const;
		void		set_string2(char* string2);
		bool		open_file(std::ifstream& ifs);
		void		create_new_file(std::ifstream& ifs, std::ofstream& ofs);
		void		replace(void);

	private:
		const char*	_filename;
		std::string	_content;
		std::string	_new_filename;
		std::string	_string1;
		std::string	_string2;
};

void	print_error_message(void);

#endif
