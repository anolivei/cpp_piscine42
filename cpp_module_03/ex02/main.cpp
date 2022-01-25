/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:32:10 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/25 14:00:30 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	arya_stark("Arya Stark");
	ScavTrap	night_king("Night King");
	FragTrap	doge("Doge");

	arya_stark.set_atack_damage(5);
	arya_stark.attack(night_king.get_name());
	night_king.takeDamage(5);
	std::cout << arya_stark;
	std::cout << night_king;

	night_king.beRepaired(5);
	arya_stark.set_atack_damage(10);
	arya_stark.attack(night_king.get_name());
	night_king.takeDamage(arya_stark.get_atack_damage());
	std::cout << arya_stark;
	std::cout << night_king;

	arya_stark.attack(night_king.get_name());
	night_king.takeDamage(arya_stark.get_atack_damage());
	std::cout << arya_stark;
	std::cout << night_king;

	night_king.attack(arya_stark.get_name());
	arya_stark.takeDamage(night_king.get_atack_damage());
	std::cout << arya_stark;
	std::cout << night_king;

	night_king.attack(arya_stark.get_name());
	arya_stark.takeDamage(night_king.get_atack_damage());
	std::cout << arya_stark;
	std::cout << night_king;

	doge.high_fives_guys();
	std::cout << doge;

	return (0);
}
