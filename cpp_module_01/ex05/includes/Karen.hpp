/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:24:25 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/16 01:30:25 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

#define GREEN	"\e[0;32m"
#define YELLOW	"\e[0;33m"
#define RED		"\e[0;31m"
#define RESET	"\e[0m"


class	Karen
{
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
