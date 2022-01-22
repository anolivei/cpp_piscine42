/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_01.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/21 22:55:34 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void); // default constructor
		Fixed(const Fixed& copy); // copy constructor
		Fixed(const int num); // int contructor
		Fixed(const float num); // float constructor
		~Fixed(void); // destructor

		Fixed&	operator=(const Fixed& copy); // copy assignment operator overload

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_raw_bits;
		static const int	_fractional_bits;
};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif
