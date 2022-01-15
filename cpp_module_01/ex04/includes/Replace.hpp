/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 16:06:42 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/15 02:42:23 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
//#include <fstream>
//#include <string>
#include <cstring> // to strlen

# define RED	"\e[0;31m"
# define RESET	"\e[0m"

class Replace
{
	public:
		Replace(char* filename, char* string1, char* string2);
		~Replace();

		std::string	get_filename(void) const;
		void		set_filename(char* filename);

		std::string	get_new_filename(void) const;
		void		set_new_filename(char* filename);

		std::string	get_string1(void) const;
		void		set_string1(char* string1);

		std::string	get_string2(void) const;
		void		set_string2(char* string2);

	private:
		std::string	_filename;
		std::string _new_filename;
		std::string	_string1;
		std::string	_string2;
};

#endif
