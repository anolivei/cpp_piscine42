/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:30:39 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/14 01:24:26 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void		attack(void);

		std::string	get_name(void) const;
		void		set_name(std::string name);

		Weapon		get_weapon(void) const;
		void		set_weapon(Weapon& weapon);

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
