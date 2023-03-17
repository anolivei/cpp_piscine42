/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:45:04 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/16 23:47:18 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream> //cout
#include <fstream> //ifstrem
#include <sstream> //stringstream

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " input.txt" << std::endl;
		return (1);
	}
	std::ifstream inputFile(argv[1]);
	if (inputFile.is_open() == false)
	{
		std::cerr << "Error: could not open input file" << std::endl;
		return (1);
	}
	BitcoinExchange	exchange("data.csv");
	std::string	line;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line))
	{
		std::stringstream ss(line);
		std::string date;
		float value;
		if (std::getline(ss, date, '|') && ss >> value)
		{
			date.erase(0, date.find_first_not_of(" \t\n\r\f\v"));
			date.erase(date.find_last_not_of(" \t\n\r\f\v") + 1);
			try
			{
				float exchangeRate = exchange.getExchangeRate(date, value);
				float result = value * exchangeRate;
				std::cout << date << " => " << value << " = " << result << std::endl;
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
	return (0);
}
