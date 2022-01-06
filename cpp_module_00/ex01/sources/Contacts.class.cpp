/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:48:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/06 00:14:10 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.class.hpp"

std::string Contacts::get_first_name(void) const
{
	return (this->_first_name);
}

void	Contacts::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}