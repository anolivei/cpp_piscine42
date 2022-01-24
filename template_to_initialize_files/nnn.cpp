#include <iostream>
#include "nnn.hpp"

nnn::nnn(void)
{
	std::cout
		<< "Default constructor called"
		<< std::endl;
	return ;
}

nnn::nnn(const nnn& obj)
{
	std::cout
		<< "Copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

nnn::~nnn(void)
{
	std::cout
		<< "Destructor called"
		<< std::endl;
	return ;
}

nnn& nnn::operator=(const nnn& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
