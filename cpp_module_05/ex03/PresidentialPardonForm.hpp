/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:25 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/15 16:34:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include <string>

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& obj);
		
		void	execute(const Bureaucrat& executor) const;
		std::string	get_target(void) const;

	private:
		std::string	_target;
};

std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& i);

#endif
