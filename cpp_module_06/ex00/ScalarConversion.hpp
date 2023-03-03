/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:23 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/03 16:22:42 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>

class ScalarConversion
{
	public:
		ScalarConversion(void);
		ScalarConversion(char * arg);
		ScalarConversion(const ScalarConversion& obj);
		virtual ~ScalarConversion(void);

		ScalarConversion&	operator=(const ScalarConversion& obj);

		class ImpossibleTypeConversation : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("[ERROR] The type conversion is impossible, it must be a char, a int, a float or a double");
				}
		};

		char	valueChar;
		int		valueInt;
		float	valueFloat;
		double	valueDouble;
		

	private:
		char *	_arg;
		std::string	_type;
		
		void	_checkType(void);
		bool	_isChar(char *arg);
		bool	_isInt(char *arg);
		bool	_isFloat(char *arg);
		bool	_isDouble(char *arg);

	protected:

};

std::ostream&	operator<<(std::ostream& o, const ScalarConversion& i);

#endif
