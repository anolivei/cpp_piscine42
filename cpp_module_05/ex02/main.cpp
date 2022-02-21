/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/17 10:50:35 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) 
{

	std::cout << "---------CREATE BUREAUCRATS AND FORMS---------" << std::endl;

	Bureaucrat	pyotr;
	Bureaucrat	vasilia("Vasilia", 43);
	Form		form42("42", 42, 42);
	Form		form149("149", 149, 149);
	Form		*form42_21 = new Form("42_21", 42, 21);

	std::cout << "------------------DEEP COPY-------------------" << std::endl;

	Form		*form42_21_copy = new Form(*form42_21);
	delete form42_21;
	std::cout << *form42_21_copy << std::endl;
	delete form42_21_copy;

	std::cout << "----------HIGHEST AND LOWEST GRADES-----------" << std::endl;

	try
	{
		Form		form151_1("151_1", 151, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form		form151_0("151_0", 150, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------------------SIGNING--------------------" << std::endl;

	std::cout << pyotr << std::endl;
	std::cout << vasilia << std::endl;

	pyotr.sign_form(form42);
	pyotr.sign_form(form149);

	vasilia.sign_form(form149);
	vasilia.sign_form(form42);

	vasilia.increment_grade();
	std::cout << vasilia << std::endl;

	vasilia.sign_form(form42);

	return (0);
}
