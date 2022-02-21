/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:15:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/17 10:53:22 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(const AForm& obj);
		AForm(std::string name, int grade_sign, int grade_execute);
		virtual ~AForm(void);

		AForm&	operator=(const AForm& obj);

		std::string	get_name(void) const;
		bool		get_signed_status(void) const;
		int			get_grade_sign(void) const;
		int			get_grade_execute(void) const;

		void		be_signed(Bureaucrat& bureaucrat);

	protected:
		class GradeTooHighException : public std::exception
		{
			virtual const char* what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what(void) const throw();
		};


	private:
		const std::string	_name;
		bool				_is_signed;
		const int			_grade_sign;
		const int			_grade_execute;
		void				_check_grades(void);

};

std::ostream&	operator<<(std::ostream& o, const AForm& i);

#endif
