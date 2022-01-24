/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 00:32:10 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/24 01:51:14 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap	whitewalker("whitewalker");
	ClapTrap	john_snow("John Snow");

	john_snow.attack(whitewalker.get_name());
	return (0);
}
