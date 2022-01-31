/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 17:41:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) 
{
	std::cout << "--------------------ANIMAL--------------------" << std::endl;

	const Animal	*meta = new Animal();
	const Animal	*i = new Cat();
	const Animal	*j = new Dog();

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << i->get_type() << " " << std::endl;
	std::cout << j->get_type() << " " << std::endl;

	std::cout << *i<< " " << std::endl;
	std::cout << *j<< " " << std::endl;

	i->make_sound();
	j->make_sound();
	meta->make_sound();

	std::cout << "----------------------------------------------" << std::endl;

	delete i;
	delete j;
	delete meta;

	std::cout << "-----------------WRONG-ANIMAL-----------------" << std::endl;

	const WrongAnimal	*wrong_meta = new WrongAnimal();
	const WrongAnimal	*k = new WrongCat();
	const WrongCat		*wrong_cat = new WrongCat();

	std::cout << "----------------------------------------------" << std::endl;

	std::cout << k->get_type() << " " << std::endl;

	std::cout << *k<< " " << std::endl;

	k->make_sound();
	wrong_meta->make_sound();
	wrong_cat->make_sound();

	std::cout << "----------------------------------------------" << std::endl;

	delete wrong_meta;
	delete k;
	delete wrong_cat;

	return (0);
}