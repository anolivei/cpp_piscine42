/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:46:05 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:46:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

class Cat 
{

	public:
		Cat(void);
		Cat(const Cat& obj);
		~Cat(void);

		Cat& operator=(const Cat& obj);   

	private:

};

#endif
