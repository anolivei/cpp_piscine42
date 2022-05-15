/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 18:21:19 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) 
{
	std::cout << "------------------BUREAUCRATS------------------" << std::endl;
	Bureaucrat rene("René Descartes", 1);
	Bureaucrat galileu("Galileu Galilei", 150);

	std::cout << "--------------PRESIDENTIAL PARDON--------------" << std::endl;
	PresidentialPardonForm alfa("Alfa");
	galileu.execute_form(alfa);
	rene.sign_form(alfa);
	galileu.sign_form(alfa);
	rene.execute_form(alfa);
	galileu.execute_form(alfa);

	std::cout << "---------------ROBOTOMY REQUEST----------------" << std::endl;
	RobotomyRequestForm beta("Beta");
	rene.execute_form(beta);
	galileu.sign_form(beta);
	rene.sign_form(beta);
	galileu.execute_form(beta);
	rene.execute_form(beta);
	rene.execute_form(beta);
	rene.execute_form(beta);
	rene.execute_form(beta);

	std::cout << "--------------SHRUBBERY CREATION---------------" << std::endl;
	ShrubberyCreationForm gama("Gama");
	rene.execute_form(gama);
	galileu.sign_form(gama);
	rene.sign_form(gama);
	galileu.execute_form(gama);
	rene.execute_form(gama);
return (0);
} 
