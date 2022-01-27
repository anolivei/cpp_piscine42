/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:57 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:45:58 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

class Dog 
{

	public:
		Dog(void);
		Dog(const Dog& obj);
		~Dog(void);

		Dog& operator=(const Dog& obj);   

	private:

};

#endif
