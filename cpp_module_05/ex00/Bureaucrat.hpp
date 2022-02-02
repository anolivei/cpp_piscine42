/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/02 00:58:27 by anolivei         ###   ########.fr       */
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
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat& obj);

		const std::string	get_name(void) const;
		int					get_grade(void) const;

		class GradeTooHighException
		{
			public:
				const char* grade_except(void) const throw();
		};

		class GradeTooLowException
		{
			public:
				const char* grade_except(void) const throw();
		};

	private:
		const std::string	_name;
		int					_grade;

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& i);

#endif
