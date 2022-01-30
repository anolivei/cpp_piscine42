/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:26:21 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 23:26:22 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{
	public:
		Character(void);
		Character(const Character& obj);
		~Character(void);

		Character&	operator=(const Character& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Character& i);

#endif
