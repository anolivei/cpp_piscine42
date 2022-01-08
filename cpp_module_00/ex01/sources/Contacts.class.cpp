/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:48:46 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 02:51:56 by anolivei         ###   ########.fr       */
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

std::string Contacts::get_last_name(void) const
{
	return (this->_last_name);
}

void	Contacts::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

std::string Contacts::get_nickname(void) const
{
	return (this->_nickname);
}

void	Contacts::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string Contacts::get_phone_number(void) const
{
	return (this->_phone_number);
}

void	Contacts::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

std::string Contacts::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Contacts::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}
