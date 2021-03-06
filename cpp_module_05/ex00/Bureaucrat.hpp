/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/14 23:29:46 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat& obj);

		const std::string	get_name(void) const;
		int					get_grade(void) const;

		void				increment_grade(void);
		void				decrement_grade(void);

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
		int					_grade;
		void				_check_high(void);
		void				_check_low(void);
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& i);

#endif
