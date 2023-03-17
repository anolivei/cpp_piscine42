/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:49:18 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/16 23:47:33 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream> //cout
#include <fstream> //fstrem
#include <sstream> //stringstream and isstringstream
#include <map>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(const std::string& databaseFile);
		BitcoinExchange(const BitcoinExchange& obj);
		virtual ~BitcoinExchange(void);

		BitcoinExchange&	operator=(const BitcoinExchange& obj);

		float getExchangeRate(const std::string& date, float value) const;

	private:
		std::map<std::string, float> _exchangeRates;

	protected:
		class runtimeError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: could not open bitcoin price database file.");
				}
		};

		class invalidArgument : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: no exchange rate found for given date.");
				}
		};

		class negativeValue : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: not a positive number.");
				}
		};

		class tooLargeNumber : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: too large a number.");
				}
		};

		class inexistentDate : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error: inexistent date.");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const BitcoinExchange& i);

#endif
