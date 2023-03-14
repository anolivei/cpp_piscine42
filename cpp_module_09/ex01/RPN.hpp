/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:46:16 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 16:07:07 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>
#include <stdlib.h> 

class RPN
{
	public:
		RPN(void);
		RPN(const RPN& obj);
		virtual ~RPN(void);

		RPN&	operator=(const RPN& obj);

		void	reversePolishNotation(const std::string &expr);
		bool	isOperator(char c);
		void	calculate(int op1, int op2, char c);

		int		getResult(void) const;

	private:
		std::stack<int> _stack;
		int				_result;

	protected:
		class insufficientOperands : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: insufficient operands");
				}
		};

		class invalidToken : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: invalid token");
				}
		};

		class tooManyOperands : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: too many operands");
				}
		};

		class divisionByZero : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: division by zero");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const RPN& i);

#endif
