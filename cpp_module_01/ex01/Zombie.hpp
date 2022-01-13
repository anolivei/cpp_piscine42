/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:42:17 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/13 18:01:01 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void		announce(void);
		std::string	get_zombie_name(void) const;
		void		set_zombie_name(std::string zombie_name);

	private:
		std::string	_zombie_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
