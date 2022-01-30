/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 23:26:08 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& obj);
		~AMateria(void);

		AMateria&	operator=(const AMateria& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const AMateria& i);

#endif
