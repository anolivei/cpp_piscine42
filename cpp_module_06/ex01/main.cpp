/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 23:10:10 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/06 14:57:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "serialization.hpp"

void	printData(Data* gamer)
{
	std::cout << "Level: " << gamer->level << std::endl
	<< "Health: " << gamer->health << std::endl
	<< "Points: " << gamer->points << std::endl
	<< "Game Complete: " << gamer->gameComplete << std::endl
	<< "Boss Defeated: " << gamer->bossDefeated << std::endl << std::endl;
}

int main(void) 
{
	Data*		gamer = new Data();
	uintptr_t	serializeData;
	Data*		deserializeData;

	gamer->level = 10;
	gamer->health = 10;
	gamer->points = 1000;
	gamer->gameComplete = false;
	gamer->bossDefeated = false;

	std::cout << "original Data" << std::endl;
	printData(gamer);

	std::cout << "Serialized Data" << std::endl;
	serializeData = serialize(gamer);
	std::cout << serializeData << std::endl << std::endl;

	std::cout << "Deserialized Data" << std::endl;
	deserializeData = deserialize(serializeData);
	printData(deserializeData);
	delete gamer;
}
