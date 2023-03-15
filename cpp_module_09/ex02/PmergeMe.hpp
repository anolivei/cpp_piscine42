/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 17:05:00 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/15 14:16:06 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stdlib.h> 

class PmergeMe
{
	public:
		PmergeMe(void);
		PmergeMe(int argc, char **argv);
		PmergeMe(const PmergeMe& obj);
		virtual ~PmergeMe(void);

		PmergeMe&	operator=(const PmergeMe& obj);

		unsigned int*	getBefore(void) const;
		unsigned int*	getAfter(void) const;
		unsigned int	getSize(void) const;

	private:
		bool				_sorted;
		std::vector<int>	_vector;
		std::list<int>		_list;
		double				vectorDuration;
		double				istDuration;
		unsigned int		_size;

		std::vector<int>	_parseArgsVector(int argc, char **argv);
		std::list<int>		_parseArgsList(int argc, char **argv);
		void				_print(void);

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
