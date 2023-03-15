/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:49:18 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/14 17:49:34 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>

class BitcoinExchange
{
	public:
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange& obj);
		virtual ~BitcoinExchange(void);

		BitcoinExchange&	operator=(const BitcoinExchange& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const BitcoinExchange& i);

#endif
