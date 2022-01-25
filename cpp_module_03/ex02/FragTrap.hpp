/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:30 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 14:03:43 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap&	operator=(const FragTrap &obj);

		void		high_fives_guys(void);
};

std::ostream&	operator<<(std::ostream& o, const FragTrap& frag_trap);

#endif
