/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/16 23:30:47 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm
{
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(const RobotomyRequestForm& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const RobotomyRequestForm& i);

#endif
