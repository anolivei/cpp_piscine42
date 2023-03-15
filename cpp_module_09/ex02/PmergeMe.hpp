/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:00 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 17:40:23 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <stdlib.h> //atoi
#include <time.h> //clock
#include <iomanip> //setprecision
#include <vector>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe& obj);
		virtual ~PmergeMe(void);

		PmergeMe&	operator=(const PmergeMe& obj);

	private:
		int					_size;
		bool				_sorted;
		std::vector<int>	_vector;
		std::deque<int>		_deque;
		double				_deltaTimeVector;
		double				_deltaTimeDeque;

		std::vector<int>	_parseArgsVector(int argc, char **argv);
		std::deque<int>		_parseArgsDeque(int argc, char **argv);
		void				_printBeforeAfter(void);
		void				_insertionSortVector(void);
		void				_insertionSortDeque(void);

	protected:

		class invalidArgument : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: invalid argument");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i);

#endif
