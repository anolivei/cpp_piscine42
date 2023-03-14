/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:46:10 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 15:48:11 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{
	return ;
}

RPN::RPN(const RPN& obj)
{
	*this = obj;
	return ;
}

RPN::~RPN(void)
{
	return ;
}

RPN& RPN::operator=(const RPN& obj)
{
	if (this != &obj)
	{
		this->_stack = obj._stack;
	}
	return (*this);
}

bool	RPN::isOperator(char c)
{
	return c == '+' || c == '-' || c == '*' || c == '/';
}

void	RPN::calculate(int op1, int op2, char c)
{
	switch (c)
	{
		case '+':
			_stack.push(op1 + op2);
			break;
		case '-':
			_stack.push(op1 - op2);
			break;
		case '*':
			_stack.push(op1 * op2);
			break;
		case '/':
			if (op2 == 0)
			{
				std::cout << "Error: division by zero" << std::endl;
				break;
			}
			_stack.push(op1 / op2);
			break;
	}
}

int	RPN::reversePolishNotation(const std::string &expr)
{
	_result = 0;
	std::string token = "";

	for (std::size_t i = 0; i < expr.length(); i++)
	{
		char c = expr[i];
		if (c == ' ')
			continue;
		else if (isdigit(c))
			token += c;
		else if (isOperator(c))
		{
			if (_stack.size() < 2)
			{
				std::cout << "Error: insufficient operands" << std::endl;
				return (0);
			}
			int op2 = _stack.top();
			_stack.pop();
			int op1 = _stack.top();
			_stack.pop();
			calculate(op1, op2, c);
		}
		else
		{
			std::cout << "Error: invalid token '" << c << std::endl;
			return (0);
		}
		if (!token.empty())
		{
			_stack.push(atoi(token.c_str()));
			token.clear();
		}
	}
	if (_stack.size() != 1)
	{
		std::cout << "Error: too many operands" << std::endl;
		return (0);
	}
	_result = _stack.top();
	_stack.pop();
	return (_result);
}

int	RPN::getResult(void) const
{
	return (this->_result);
}

std::ostream&	operator<<(std::ostream& o, const RPN& i)
{
	o << i.getResult();
	return o;
}
