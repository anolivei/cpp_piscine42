/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:42:02 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/13 18:27:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *newZombieHorde;

	newZombieHorde = zombieHorde(4, "Heaaap Zombie");
	delete [] newZombieHorde;
	return (0);
}
