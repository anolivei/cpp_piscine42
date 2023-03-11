/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:13:26 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/11 11:51:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <vector>

void testWithMutantStack()
{
	std::cout << "\n---- Test with MutantStack (from subject) ----\n"<< std::endl;
	MutantStack<int> mutantStack;
	mutantStack.push(5);
	mutantStack.push(17);
	std::cout << mutantStack.top() << std::endl;
	mutantStack.pop();
	std::cout << mutantStack.size() << std::endl;
	mutantStack.push(3);
	mutantStack.push(5);
	mutantStack.push(737);
	mutantStack.push(0);
	MutantStack<int>::iterator it = mutantStack.begin();
	MutantStack<int>::iterator ite = mutantStack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mutantStack);
}

void	testWithVector(void)
{
	std::cout << "\n---- Test with Vector ----\n"<< std::endl;
	std::vector<int> vectorVerify;
	vectorVerify.push_back(5);
	vectorVerify.push_back(17);
	std::cout << *(vectorVerify.end() - 1) << std::endl;
	vectorVerify.pop_back();
	std::cout << vectorVerify.size() << std::endl;
	vectorVerify.push_back(3);
	vectorVerify.push_back(5);
	vectorVerify.push_back(737);
	vectorVerify.push_back(0);
	std::vector<int>::iterator it = vectorVerify.begin();
	std::vector<int>::iterator ite = vectorVerify.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int, std::vector<int> > s(vectorVerify);
}

int main()
{
	testWithMutantStack();
	testWithVector();
}
