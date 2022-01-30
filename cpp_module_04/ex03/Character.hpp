/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:21 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/30 18:01:11 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const Character& obj);
		Character(std::string name);
		virtual ~Character(void);

		Character&			operator=(const Character& obj);

		const std::string&	get_name(void) const;

		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private:
		std::string	_name;
		AMateria*	_inventory[4];

};

std::ostream&	operator<<(std::ostream& o, const Character& i);

#endif
