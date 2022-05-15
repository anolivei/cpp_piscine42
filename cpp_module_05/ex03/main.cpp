/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 19:36:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) 
{
	Intern intern;
	Bureaucrat bureaucrat("Edu", 1);

	AForm *formPresidential = intern.make_form("presidential pardon", "capivara");
	bureaucrat.execute_form(*formPresidential);
	bureaucrat.sign_form(*formPresidential);
	bureaucrat.execute_form(*formPresidential);
	delete formPresidential;	

	AForm *formShrubbery = intern.make_form("shrubbery creation", "pé de mexerica");
	bureaucrat.execute_form(*formShrubbery);
	bureaucrat.sign_form(*formShrubbery);
	bureaucrat.execute_form(*formShrubbery);
	delete formShrubbery;

	AForm *formRobotomy = intern.make_form("robotomy request", "iogurteira toptherm");
	bureaucrat.execute_form(*formRobotomy);
	bureaucrat.sign_form(*formRobotomy);
	bureaucrat.execute_form(*formRobotomy);
	delete formRobotomy;

	AForm *inexitentForm = intern.make_form("nananananananan", "batcat");
	delete inexitentForm;

	return (0);
}
