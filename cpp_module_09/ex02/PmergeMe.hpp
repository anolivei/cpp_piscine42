/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:00 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 22:14:34 by anolivei         ###   ########.fr       */
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
#include <set>
#include <sys/time.h> //gettimeofday

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

		void				_verifyDuplicates(void);

		void				_printBeforeAfter(void);
		void				_printTime(std::string vectorDeque) const;
		void				_insertionSortVector(void);
		void				_insertionSortDeque(void);
	
		double			_getTime(void);
		double			_deltaTime(long long time);

	protected:

		class invalidArgumentError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: invalid argument");
				}
		};

		class duplicatesError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: duplicates are forbidden");
				}
		};

		class containerTypeError : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("[Error]: container choosen to print is not vector or deque");
				}
		};
};

std::ostream&	operator<<(std::ostream& o, const PmergeMe& i);

#endif
