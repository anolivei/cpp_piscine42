/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:24:22 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/16 01:38:02 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(void)
{
	Karen karen;
	std::string	levels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	for (int i = 0; i < 4; i++)
		karen.complain(levels[i]);
	return (0);
}
