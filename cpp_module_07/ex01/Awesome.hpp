/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:59:18 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/07 15:16:52 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
	public:
		Awesome(void);
		Awesome(int n);
		Awesome(const Awesome& obj);
		virtual ~Awesome(void);

		Awesome&	operator=(const Awesome& obj);

		int	 	get_n(void) const;
		void	set_n(int n);
		float	operator+=(int obj);
		float	operator*=(int obj);
		bool	operator>(Awesome const &obj) const;
		bool	operator>=(Awesome const &obj) const;
		bool	operator<(Awesome const &obj) const;
		bool	operator<=(Awesome const &obj) const;
		bool	operator==(Awesome const &obj) const;
		bool	operator!=(Awesome const &obj) const;

	private:
		int	_n;

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Awesome& i);

#endif
