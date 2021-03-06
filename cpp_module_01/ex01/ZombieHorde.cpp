/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:42:21 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/13 18:38:32 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie*	zombies;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombies[i].set_zombie_name(name.append("e"));
		zombies[i].announce();
	}
	return (&zombies[0]);
}
