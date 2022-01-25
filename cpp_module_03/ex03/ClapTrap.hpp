/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:27:30 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 12:33:52 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &obj);
		ClapTrap(std::string name);
		virtual ~ClapTrap(void);

		ClapTrap&		operator=(const ClapTrap &obj);

		std::string		get_name(void) const;
		int				get_hit_points(void) const;
		int				get_energy_points(void) const;
		int				get_atack_damage(void) const;

		void			set_name(std::string name);
		void			set_hit_points(int hit_points);
		void			set_energy_points(int hit_points);
		void			set_atack_damage(int hit_points);

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hit_points;
		int				_energy_points;
		int				_atack_damage;
};

std::ostream&	operator<<(std::ostream& o, const ClapTrap& clap_trap);

#endif
