/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 23:30:25 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/21 15:57:08 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(const PresidentialPardonForm& obj);
};

std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& i);

#endif
