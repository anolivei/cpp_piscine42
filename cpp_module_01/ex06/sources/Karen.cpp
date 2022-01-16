/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:24:28 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/16 18:42:00 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::complain(std::string level)
{
	void	(Karen::*ft_ptr[4])(void) =
	{
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error,
	};
	std::string	levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	int i = 0;
	while (levels[i] != level && i < 4)
		i++;
	switch (i)
	{
		case 4:
			break ;
		case 0:
			(this->*ft_ptr[i])();
			i++;
		case 1:
			(this->*ft_ptr[i])();
			i++;
		case 2:
			(this->*ft_ptr[i])();
			i++;
		default:
			(this->*ft_ptr[i])();
			break ;
	}
}

void	Karen::debug(void)
{
	std::cout
		<< GREEN
		<< "[DEBUG]   I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
		<< "I just love it!"
		<< std::endl
		<< RESET;
}

void	Karen::info(void)
{
	std::cout
		<< GREEN
		<< "[INFO]    I cannot believe adding extra bacon cost more money. "
		<< "You don't put enough! If you did I would not have to ask for it!"
		<< std::endl
		<< RESET;
}

void	Karen::warning(void)
{
	std::cout
		<< YELLOW
		<< "[WARNING] I think I deserve to have some extra bacon for free. "
		<< "I've been coming here for years and you just started working "
		<< "here last month."
		<< std::endl
		<< RESET;
}

void	Karen::error(void)
{
	std::cout
		<< RED
		<< "[ERROR]   This is unacceptable, I want to speak to the manager now."
		<< std::endl
		<< RESET;
}
