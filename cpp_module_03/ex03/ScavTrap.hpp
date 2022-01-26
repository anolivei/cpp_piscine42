/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:30 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 23:24:39 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &obj);
		ScavTrap(std::string name);
		virtual ~ScavTrap(void);

		ScavTrap&		operator=(const ScavTrap &obj);

		void			guard_gate(void);
		virtual void	attack(const std::string& target);

	protected:
		static int		_start_hit_points;
		static int		_start_energy_points;
		static int		_start_atack_damage;
};

std::ostream&	operator<<(std::ostream& o, const ScavTrap& scav_trap);

#endif
