/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:49:14 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 17:49:47 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	std::cout
		<< "BitcoinExchange default constructor called"
		<< std::endl;
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	std::cout
		<< "BitcoinExchange copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout
		<< "BitcoinExchange destructor called"
		<< std::endl;
	return ;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != &obj)
	{
		//this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const BitcoinExchange& i)
{
	o << "something";
	return o;
}
