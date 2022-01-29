/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 04:21:46 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void) 
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	Cat basic;
	Cat tmp = basic;

	int len = 10;
	Animal *tab[len];
	int k = 0;
	while (k < (len / 2))
	{
		tab[k] = new Dog();
		k++;
	}
	while (k < len)
	{
		tab[k] = new Cat();
		k++;
	}
	while (--k >= 0)
		delete tab[k];

	delete j;
	delete i;
	return (0);
}