/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/30 17:50:19 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria& obj);
		AMateria(const std::string& type);
		virtual ~AMateria(void);

		AMateria&			operator=(const AMateria& obj);

		std::string			get_type(void) const;

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			_type;
};

std::ostream&	operator<<(std::ostream& o, const AMateria& i);

#endif
