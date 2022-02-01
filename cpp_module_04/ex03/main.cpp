/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:29:00 by anolivei          #+#    #+#             */
/*   Updated: 2022/02/01 00:07:04 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void) 
{
	// subject
	IMateriaSource* src = new MateriaSource();
	src->learn_materia(new Ice());
	src->learn_materia(new Cure());

	Character* bilbo = new Character("Bilbo");
	AMateria* tmp;
	tmp = src->create_materia("ice");
	bilbo->equip(tmp);
	tmp = src->create_materia("cure");
	bilbo->equip(tmp);

	ICharacter* gandalf = new Character("Gandalf");
	bilbo->use(0, *gandalf);
	bilbo->use(1, *gandalf);

	// deep copy MateriaSource
	MateriaSource* src2 = new MateriaSource();
	src2->learn_materia(new Ice());
	src2->learn_materia(new Cure());
	MateriaSource* src_copy = new MateriaSource(*src2);
	delete src2;

	// full inventory and unequip
	tmp = src_copy->create_materia("ice");
	bilbo->equip(tmp);

	AMateria *last_item = src_copy->create_materia("cure");
	bilbo->equip(last_item);

	bilbo->equip(tmp);

	bilbo->unequip(3);

	delete last_item;

	// deep copy Character
	Character* bilbo_copy = new Character(*bilbo);
	delete bilbo;

	bilbo_copy->use(0, *gandalf);
	bilbo_copy->use(1, *gandalf);
	// empty
	bilbo_copy->use(3, *gandalf);

	// materia that does not exist
	tmp = src->create_materia("does_not_exist");
	tmp = src->create_materia("ice");

	bilbo_copy->equip(tmp);
	bilbo_copy->use(3, *gandalf);

	// delete objects
	delete gandalf;
	delete bilbo_copy;
	delete src;
	delete src_copy;
	return (0);
}
