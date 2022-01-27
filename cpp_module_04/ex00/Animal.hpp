/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:13 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:46:14 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal 
{

	public:
		Animal(void);
		Animal(const Animal& obj);
		~Animal(void);

		Animal& operator=(const Animal& obj);   

	private:

};

#endif
