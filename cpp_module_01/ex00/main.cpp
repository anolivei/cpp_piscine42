/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:33:58 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/11 01:44:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	zombie;

	zombie.set_zombie_name("Staaaack Zombie");
	zombie.announce();
	randomChump("Heeeeeeap Zombie");
	return (0);
}
