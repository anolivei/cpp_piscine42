/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:26 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 23:26:28 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>

class Cure
{
	public:
		Cure(void);
		Cure(const Cure& obj);
		~Cure(void);

		Cure&	operator=(const Cure& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Cure& i);

#endif
