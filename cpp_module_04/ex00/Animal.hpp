/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:13 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 02:08:20 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal 
{
	public:
		Animal(void);
		Animal(const Animal& obj);
		virtual ~Animal(void);

		Animal& operator=(const Animal& obj);

		void			set_type(std::string type);
		std::string		get_type(void) const;

		virtual void	make_sound(void) const;

	protected:
		std::string		_type;
};

std::ostream& operator<<(std::ostream& o, Animal const& animal);

#endif
