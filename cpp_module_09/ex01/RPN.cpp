/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:46:10 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 16:10:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void) : _result(0)
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
		this->_result = obj._result;
	}
	return (*this);
}

void	RPN::reversePolishNotation(const std::string &expr)
{
	std::string token;

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
				throw insufficientOperands();
			int op2 = _stack.top();
			_stack.pop();
			int op1 = _stack.top();
			_stack.pop();
			calculate(op1, op2, c);
		}
		else
			throw invalidToken();
		if (!token.empty())
		{
			_stack.push(atoi(token.c_str()));
			token.clear();
		}
	}
	if (_stack.size() != 1)
		throw tooManyOperands();
	_result = _stack.top();
	_stack.pop();
}

bool	RPN::isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (true);
	return (false);
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
				throw divisionByZero();
			_stack.push(op1 / op2);
			break;
	}
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
