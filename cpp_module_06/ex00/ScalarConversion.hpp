/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:23 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/05 00:20:58 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERSION_HPP
#define SCALAR_CONVERSION_HPP

#include <iostream>
#include <stdlib.h> //atoi, atof and strtod
#include <iomanip> //setprecision
#include <limits.h> //limit for int
#include <float.h> //limit for fload and double

#define CHAR			1
#define INT				2
#define FLOAT			3
#define DOUBLE			4
#define PSEUDO_LITERAL	5

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
					return ("[ERROR] The type conversion is impossible, it must be a char, an int, a float or a double");
				}
		};

		std::string printChar(void);

		int		type;
		char	valueChar;
		int		valueInt;
		float	valueFloat;
		double	valueDouble;
		std::string	valuePseudoLiteral;
		

	private:
		char *	_arg;

		void	_checkType(void);
		bool	_isChar(char *arg);
		bool	_isInt(char *arg);
		bool	_isFloat(char *arg);
		bool	_isDouble(char *arg);
		bool	_isPseudoLiteral(char *arg);

		void	_convert(void);
		void	_charConvert(void);
		void	_intConvert(void);
		void	_floatConvert(void);
		void	_doubleConvert(void);
		void	_pseudoLiteralConvert(void);

		void	_checkLimit(void);
		bool	_charLimit;
		bool	_intLimit;
		bool	_floatLimit;
		bool	_doubleLimit;
		

	protected:

};

std::ostream&	operator<<(std::ostream& o, const ScalarConversion& i);

#endif
