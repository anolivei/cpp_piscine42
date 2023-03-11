/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 21:13:34 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/11 13:21:42 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack(void): std::stack<T, Container>()
		{
			return ;
		};
		MutantStack(const MutantStack& obj ): std::stack<T, Container>(obj)
		{
			return ;
		};
		virtual ~MutantStack(void)
		{
			return ;
		};

		typedef typename Container::iterator iterator;
		iterator	begin(void)
		{
			return (this->c.begin());
		};
		iterator	end(void)
		{
			return (this->c.end());
		};

		MutantStack& operator=(const MutantStack& obj)
		{
			if (this != &obj)
				std::stack<T, Container>::operator=(obj);
			return (*this);
		};
};

#endif
