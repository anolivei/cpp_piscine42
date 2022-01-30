/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:38:22 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/30 16:48:36 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}

		virtual void		learn_materia(AMateria*) = 0;
		virtual AMateria*	create_materia(const std::string& type) = 0;
};

#endif
