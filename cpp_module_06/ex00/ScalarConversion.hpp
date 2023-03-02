/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:58:23 by anolivei          #+#    #+#             */
/*   Updated: 2022/05/17 22:58:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>

class Scalar
{
	public:
		Scalar(void);
		Scalar(const Scalar& obj);
		virtual ~Scalar(void);

		Scalar&	operator=(const Scalar& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Scalar& i);

#endif
