/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:05 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 02:03:29 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{

	public:
		Cat(void);
		Cat(const Cat& obj);
		~Cat(void);

		Cat& operator=(const Cat& obj);

		void	make_sound(void) const;
};

std::ostream&	operator<<(std::ostream& o, const Cat& cat);

#endif
