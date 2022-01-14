/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:12:48 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/13 21:12:09 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	brainPtr = &brain;
	std::string&	brainRef = brain;

	std::cout
		<< "Address of brain:    " << &brain << std::endl
		<< "Address of brainPtr: " << brainPtr << std::endl
		<< "Address of brainRef: " << &brainRef << std::endl;

	std::cout
		<< "Content of brain:    " << brain << std::endl
		<< "Content of brainPtr: " << *brainPtr << std::endl
		<< "Content of brainRef: " << brainRef << std::endl;

	return (0);
}
