/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:13:26 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/11 12:37:20 by anolivei         ###   ########.fr       */
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

static void testFloatVector(void)
{
	std::cout << "\n---- Test with Float Vector ----\n";
	std::cout << "\nCreating mutantStack" << std::endl;
	MutantStack<float, std::vector<float> > mutantStack;
	if (mutantStack.empty())
		std::cout << "\nstack is empty\n" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "pushing 4.2 and 2.1 to mutant stack\n" << std::endl;
	mutantStack.push(4.2);
	mutantStack.push(2.1);
	if (mutantStack.empty())
		std::cout << "\nstack is empty\n" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "\nTop number:" << std::endl;
	std::cout << mutantStack.top() << std::endl;
	std::cout << "\nStack size:" << std::endl;
	std::cout << mutantStack.size() << std::endl;
	std::cout << "\nPopping the stack" << std::endl;
	mutantStack.pop();
	std::cout << "\nStack size:" << std::endl;
	std::cout << mutantStack.size() << std::endl;
	std::cout << "\nPushing 1.2, 3.4, 56.7 and 89.0 to the stack\n" << std::endl;
	mutantStack.push(1.2);
	mutantStack.push(3.4);
	mutantStack.push(56.7);
	mutantStack.push(89.0);
	MutantStack<float, std::vector<float> >::iterator it = mutantStack.begin();
	MutantStack<float, std::vector<float> >::iterator ite = mutantStack.end();
	++it;
	--it;
	std::cout << "\nStack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\nPopping the stack" << std::endl;
	mutantStack.pop();
	std::cout << "\nStack:" << std::endl;
	it = mutantStack.begin();
	ite = mutantStack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\nCopying the stack\n" << std::endl;
	MutantStack<float, std::vector<float> > mutantStackCopy(mutantStack);
	MutantStack<float, std::vector<float> >::iterator itCopy = mutantStackCopy.begin();
	MutantStack<float, std::vector<float> >::iterator iteCopy = mutantStackCopy.end();
	++itCopy;
	--itCopy;
	std::cout << "\nCopied stack:\n" << std::endl;
	while (itCopy != iteCopy)
	{
		std::cout << *itCopy << std::endl;
		++itCopy;
	}
	std::cout << "\nPushing 123456 to the original stack\n" << std::endl;
	mutantStack.push(123456);
	it = mutantStack.begin();
	ite = mutantStack.end();
	std::cout << "\nOriginal stack:\n" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	itCopy = mutantStackCopy.begin();
	iteCopy = mutantStackCopy.end();
	std::cout << "\nCopy stack:\n" << std::endl;
	while (itCopy != iteCopy)
	{
		std::cout << *itCopy << std::endl;
		++itCopy;
	}
}

int main()
{
	testWithMutantStack();
	testWithVector();
	testFloatVector();
}
