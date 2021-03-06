/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:30 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 23:15:41 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &obj);
		FragTrap(std::string name);
		virtual ~FragTrap(void);

		FragTrap&	operator=(const FragTrap &obj);

		void		high_fives_guys(void);
		void		attack(const std::string& target);

	protected:
		static int	_start_hit_points;
		static int	_start_energy_points;
		static int	_start_atack_damage;
};

std::ostream&	operator<<(std::ostream& o, const FragTrap& frag_trap);

#endif
