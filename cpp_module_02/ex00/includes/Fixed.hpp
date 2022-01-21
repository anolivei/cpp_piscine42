/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/20 16:50:22 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void); // constructor
		Fixed(const Fixed& copy); // copy constructor
		~Fixed(void); // destructor

		Fixed& operator=(const Fixed& copy);

		int		get_raw_bits(void) const;
		void	set_raw_bits(int const raw);

	private:
		int					_raw_bits;
		static const int	_fractional_bits;
};

#endif
