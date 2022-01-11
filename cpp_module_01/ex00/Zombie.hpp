/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:34:04 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/11 01:42:48 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE

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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
