/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:32:10 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/24 23:29:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	night_king("Night King");
	ClapTrap	arya_stark("Arya Stark");

	arya_stark.set_atack_damage(5);
	arya_stark.attack(night_king.get_name());
	std::cout << arya_stark;
	night_king.takeDamage(5);
	std::cout << night_king;
	night_king.beRepaired(5);
	arya_stark.set_atack_damage(10);
	arya_stark.attack(night_king.get_name());
	night_king.takeDamage(10);
	arya_stark.attack(night_king.get_name());
	night_king.takeDamage(10);
	std::cout << arya_stark;
	std::cout << night_king;
	return (0);
}
