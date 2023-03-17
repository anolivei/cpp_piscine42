/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:49:14 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/16 22:05:35 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	return ;
}

BitcoinExchange::BitcoinExchange(const std::string& databaseFile)
{
	std::ifstream file(databaseFile.c_str());
	if (!file.is_open())
		throw runtimeError();
	std::string line;
	while (std::getline(file, line))
	{
		std::stringstream ss(line);
		std::string date;
		float price;
		if (std::getline(ss, date, ',') && ss >> price)
			_exchangeRates[date] = price;
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj)
{
	*this = obj;
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
	if (this != &obj)
		this->_exchangeRates = obj._exchangeRates;
	return (*this);
}

bool isValidDate(const std::string& dateStr)
{
	int year, month, day;
	char separator;
	std::istringstream ss(dateStr);
	ss >> year >> separator >> month >> separator >> day;
	if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (day > 30)
			return (false);
	}
	else if (month == 2)
	{
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			if (day > 29)
				return (false);
		}
		else
		{
			if (day > 28)
				return (false);
		}
	}
	return (true);
}

float BitcoinExchange::getExchangeRate(const std::string& date, float value) const
{
	if (value < 0)
		throw negativeValue();
	if (value > 1000)
		throw tooLargeNumber();
	if (isValidDate(date) == false)
		throw inexistentDate();
	std::map<std::string, float>::const_iterator it = _exchangeRates.find(date);
	if (it == _exchangeRates.end())
	{
		it = _exchangeRates.upper_bound(date);
		if (it == _exchangeRates.begin())
			throw invalidArgument();
		--it;
	}
	return it->second;
}


std::ostream&	operator<<(std::ostream& o, const BitcoinExchange& i)
{
	(void)i;
	return o;
}
