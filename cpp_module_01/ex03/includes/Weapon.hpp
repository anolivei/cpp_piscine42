/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 21:30:43 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/13 23:36:27 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		const std::string&	get_type(void) const;
		void				set_type(const std::string& type);

	private:
		std::string _type;
};

#endif
