/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:57 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 18:17:55 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& obj);
		virtual ~Dog(void);

		Dog&	operator=(const Dog& obj);

		void	make_sound(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Dog& dog);

#endif
