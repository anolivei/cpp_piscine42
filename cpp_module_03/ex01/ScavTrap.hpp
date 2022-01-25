/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:30 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 11:07:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &obj);
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap&	operator=(const ScavTrap &obj);

		void		guard_gate(void);
		void		attack(const std::string& target);
};

std::ostream&	operator<<(std::ostream& o, const ScavTrap& scav_trap);

#endif
