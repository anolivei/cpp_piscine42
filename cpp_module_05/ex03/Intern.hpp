/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:50:54 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 19:09:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include <string>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& obj);
		virtual ~Intern(void);

		Intern&	operator=(const Intern& obj);

		AForm*	make_form(std::string form, std::string target);

	private:
		AForm* _make_presidential_form(std::string target);
		AForm* _make_robotomy_form(std::string target);
		AForm* _make_shrubbery_form(std::string target);
};

std::ostream&	operator<<(std::ostream& o, const Intern& i);

#endif
