/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:27:44 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/31 18:16:50 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& obj);
		virtual ~Brain(void);

		Brain&	operator=(const Brain& obj);

		std::string* get_ideas(void);

	protected:
		std::string	_ideas[100];
};

std::ostream&	operator<<(std::ostream& o, const Brain& brain);

#endif
