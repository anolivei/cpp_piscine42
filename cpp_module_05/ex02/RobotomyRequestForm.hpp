/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 15:39:40 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <string>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj);

		std::string				get_target(void) const;
		void	execute(const Bureaucrat& executor) const;

	private:
		std::string				_target;
};

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& i);

#endif
