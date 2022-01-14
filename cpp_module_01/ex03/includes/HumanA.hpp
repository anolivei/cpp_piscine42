/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:30:37 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/14 01:27:15 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		std::string	get_name(void) const;
		void		set_name(std::string name);

		Weapon		get_weapon(void) const;
		void		set_weapon(Weapon& weapon);

		void		attack(void);

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
