/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:21:38 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/07 15:21:31 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int main(void)
{
	std::cout << "\n---- int ----\n" << std::endl;

	int numbers[10];
	for (int i = 0; i < 10; i++)
		numbers[i] = i;
	std::cout <<"original:" << std::endl;
	iter(numbers, 10, print);
	iter(numbers, 10, addOne);
	std::cout <<"\nadd one:" << std::endl;
	iter(numbers, 10, print);
	iter(numbers, 10, doubleValue);
	std::cout <<"\ndouble:" << std::endl;
	iter(numbers, 10, print);

	std::cout << "\n---- char ----\n" << std::endl;

	char characters[10];
	for (int i = 0; i < 10; i++)
		characters[i] = 'a' + i;
	std::cout <<"original:" << std::endl;
	iter(characters, 10, print);
	iter(characters, 10, addOne);
	std::cout <<"\nadd one:" << std::endl;
	iter(characters, 10, print);

	std::cout << std::endl;

	char str[5] = "cpp";
	std::cout <<"original" << std::endl;
	iter<char>(str, 5, print);
	iter<char>(str, 5, addOne);
	std::cout <<"\nadd one:" << std::endl;
	iter<char>(str, 5, print);

	std::cout << "\n---- class ----\n" << std::endl;

	Awesome awesome[5];
	for (int i = 0; i < 5; i++)
		awesome[i].set_n(i);
	std::cout <<"original:" << std::endl;
	iter<Awesome>(awesome, 5, print);
	iter<Awesome>(awesome, 5, addOne);
	std::cout <<"\nadd one:" << std::endl;
	iter<Awesome>(awesome, 5, print);
	iter<Awesome>(awesome, 5, doubleValue);
	std::cout <<"\ndouble:" << std::endl;
	iter<Awesome>(awesome, 5, print);
}
