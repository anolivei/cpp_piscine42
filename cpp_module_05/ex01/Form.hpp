/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:15:51 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/14 23:48:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
	public:
		Form(void);
		Form(const Form& obj);
		Form(std::string name, int grade_sign, int grade_execute);
		virtual ~Form(void);

		Form&	operator=(const Form& obj);

		std::string	get_name(void) const;
		bool		get_signed_status(void) const;
		int			get_grade_sign(void) const;
		int			get_grade_execute(void) const;

		void		set_signed_status(bool is_signed);

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

std::ostream&	operator<<(std::ostream& o, const Form& i);

#endif
