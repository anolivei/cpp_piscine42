/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:36 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 01:03:41 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
class WrongAnimal 
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& obj);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& obj);

		void			set_type(std::string type);
		std::string		get_type(void) const;

		void	make_sound(void) const;

	protected:
		std::string		_type;
};

std::ostream&	operator<<(std::ostream& o, const WrongAnimal& wrong_animal);

#endif
