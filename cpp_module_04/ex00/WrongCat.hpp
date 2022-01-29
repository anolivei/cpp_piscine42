/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:40 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/28 02:35:34 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& obj);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& obj);

		void	make_sound(void) const;
};

std::ostream&	operator<<(std::ostream& o, const WrongCat& wrong_cat);

#endif
