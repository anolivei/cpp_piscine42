/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/13 23:41:39 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{
	std::cout << "----------------HEAP AND STACK----------------" << std::endl;

	Bureaucrat pyotr;
	Bureaucrat *vasilia = new Bureaucrat("Vasilia", 42);
	Bureaucrat alyosha("Alyosha", 21);

	std::cout << pyotr << std::endl;
	std::cout << *vasilia << std::endl;
	std::cout << alyosha << std::endl;

	std::cout << "-------------------COPY DEEP------------------" << std::endl;

	Bureaucrat *vasilia_copy = new Bureaucrat(*vasilia);

	std::cout << *vasilia_copy << std::endl;
	delete vasilia;
	std::cout << *vasilia_copy << std::endl;
	delete vasilia_copy;

	std::cout << "------------HIGHER AND LOWER GRADES-----------" << std::endl;

	Bureaucrat morozko("Morozko", 0);
	Bureaucrat dunyasha("Dunyasha", 151);

	std::cout << "------------INCREMENT AND DECREMENT-----------" << std::endl;


	std::cout << morozko << std::endl;
	morozko.increment_grade();
	std::cout << morozko << std::endl;

	std::cout << dunyasha << std::endl;
	dunyasha.decrement_grade();
	std::cout << dunyasha << std::endl;

	return (0);
}
