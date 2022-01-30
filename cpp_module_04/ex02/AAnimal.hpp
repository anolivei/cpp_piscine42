/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:13 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/29 22:03:37 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
class AAnimal 
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal& obj);
		virtual ~AAnimal(void);

		AAnimal& operator=(const AAnimal& obj);

		void			set_type(std::string type);
		std::string		get_type(void) const;

		virtual void	make_sound(void) const = 0;

	protected:
		std::string		_type;
};

std::ostream& operator<<(std::ostream& o, AAnimal const& AAnimal);

#endif
