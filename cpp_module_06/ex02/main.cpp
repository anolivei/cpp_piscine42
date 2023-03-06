/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:15:05 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/06 19:54:59 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib> //srand and rand

# define RED			"\e[0;31m"
# define GREEN			"\e[0;32m"
# define YELLOW			"\e[0;33m"
# define RESET			"\e[0m"

class Base
{
	public:
		virtual ~Base(void){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	Base	*emptyClass;
	int		randomNumber;

	std::cout << YELLOW << "Generating a Random Class" << RESET << std::endl;
	std::srand(time(NULL));
	randomNumber = rand();
	if (randomNumber <= RAND_MAX * 0.33)
	{
		emptyClass = new A();
		std::cout << GREEN << "A" << RESET  << std::endl;
	}
	else if (randomNumber > RAND_MAX * 0.33 && randomNumber <= RAND_MAX * 0.66)
	{
		emptyClass = new B();
		std::cout << GREEN << "B" << RESET << std::endl;
	}
	else
	{
		emptyClass = new C();
		std::cout << GREEN << "C" << RESET  << std::endl;
	}
	return (emptyClass);
}

void identify(Base* p)
{
	std::cout << YELLOW << "Identifying Class by Pointer" << RESET << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << GREEN << "A" << RESET << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << GREEN << "B" << RESET << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << GREEN << "C" << RESET << std::endl;
}

void identify(Base& p)
{
	std::cout << YELLOW << "Identifying Class by Reference" << RESET << std::endl;
	try 
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << GREEN << "A" << RESET << std::endl;
		(void)a;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << RED << " Not A" << RESET << std::endl;
	}
	try 
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << GREEN << "B" << RESET << std::endl;
		(void)b;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << RED << " Not B" << RESET << std::endl;
	}
	try 
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << GREEN << "C" << RESET << std::endl;
		(void)c;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << RED << " Not C" << RESET << std::endl;
	}
}

int	main(void)
{
	Base*	classToTest;
	classToTest = generate();
	identify(classToTest);
	identify(*classToTest);
	delete classToTest;
}
