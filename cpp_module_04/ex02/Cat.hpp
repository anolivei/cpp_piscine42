/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:05 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 18:20:52 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

	public:
		Cat(void);
		Cat(const Cat& obj);
		virtual ~Cat(void);

		Cat& operator=(const Cat& obj);

		void	make_sound(void) const;

	private:
		Brain	*_brain;
};

std::ostream&	operator<<(std::ostream& o, const Cat& cat);

#endif
