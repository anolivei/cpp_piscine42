/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:02:08 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 21:49:35 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& obj);
		virtual ~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& obj);

		void			learn_materia(AMateria* m);
		AMateria*		create_materia(const std::string& type);

	private:
		AMateria*		_materia[4];
};

#endif
