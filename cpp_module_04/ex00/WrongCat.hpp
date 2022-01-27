/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:45:40 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/26 23:45:41 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat 
{

	public:
		WrongCat(void);
		WrongCat(const WrongCat& obj);
		~WrongCat(void);

		WrongCat& operator=(const WrongCat& obj);   

	private:

};

#endif
