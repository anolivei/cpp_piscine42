/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:36 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:45:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

class WrongAnimal 
{

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& obj);
		~WrongAnimal(void);

		WrongAnimal& operator=(const WrongAnimal& obj);   

	private:

};

#endif
