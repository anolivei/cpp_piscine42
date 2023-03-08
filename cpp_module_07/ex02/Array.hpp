/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:18:29 by anolivei          #+#    #+#             */
/*   Updated: 2023/03/08 14:28:05 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		Array(void): _n(0), _elements(0)
		{
			std::cout
				<< "Constructor with no parameter called"
				<<std::endl;
		};
		Array(unsigned int n): _n(n), _elements(new T[n]())
		{
			std::cout
				<< "Constructor with an unsigned int n as a parameter called"
				<<std::endl;
		};
		Array(const Array &obj): _n(obj.size()), _elements(new T[this->_n])
		{
			std::cout
				<< "Constructor by copy called"
				<<std::endl;
			*this = obj;
		};
		~Array(void)
		{
			std::cout
				<< "Destructor called"
				<<std::endl;
			if(this->_elements)
				delete[] this->_elements;
		};

		unsigned int size(void) const
		{
			return (_n);
		};

		Array &operator=(Array const &obj)
		{
			std::cout << "Assignment operator called\n";
			try
			{
				for(unsigned int i = 0; i < obj.size(); i++)
				{
					if (i >= this->_n)
						throw OutOfBoundsException();
					this->_elements[i] = obj._elements[i];
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
			return (*this);
		};

		T &operator[](unsigned int i) const
		{
			if ((i < 0) || (i >= this->_n))
				throw OutOfBoundsException();
			return (_elements[i]);
		}

	private:
		unsigned int	_n;
		T				*_elements;

	protected:
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index is out of bounds");
				}
		};
};

#endif
