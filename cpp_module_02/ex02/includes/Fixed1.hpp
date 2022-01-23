/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed1.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 19:02:09 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/22 21:30:04 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed(void);							// default constructor
		Fixed(const Fixed& copy);				// copy constructor
		Fixed(const int int_num);				// int contructor
		Fixed(const float float_num);			// float constructor
		~Fixed(void);							// destructor

		Fixed&	operator=(const Fixed& rhs);	// copy assignment operator overload
		bool	operator>(const Fixed& rhs) const;
		bool	operator<(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;
		Fixed	operator+(const Fixed& rhs) const;
		Fixed	operator-(const Fixed& rhs) const;
		Fixed	operator*(const Fixed& rhs) const;
		Fixed	operator/(const Fixed& rhs) const;
		Fixed&	operator++(void);	// Prefix increment operator
		Fixed	operator++(int);	// Postfix increment operator
		Fixed&	operator--(void);	// Prefix decrement operator
		Fixed	operator--(int);	// Postfix decrement operator

		static Fixed&		min(Fixed& lhs, Fixed& rhs);
		static const Fixed&	min(const Fixed& lhs, const Fixed& rhs);
		static Fixed&		max(Fixed& lhs, Fixed& rhs);
		static const Fixed&	max(const Fixed& lhs, const Fixed& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_raw_bits;
		static const int	_fractional_bits;
};

/*
** explaining the variables names rhs and lhs
** int i = x + y
** rhs = right hand side (int i)
** lhs = left handa side (x + y)
*/

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif
