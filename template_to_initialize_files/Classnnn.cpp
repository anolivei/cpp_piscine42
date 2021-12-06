#include <iostream>
#include "Classnnn.hpp"

nnn::nnn(void)
{
	std::cout << "Constructor" << std::endl;
}

nnn::~nnn(void)
{
	std::cout << "Destructor" << std:endl;
}

nnn::nnn(const nnn &obj)
{
	nnn::operator = (obj);
}

nnn &nnn::operator = (const nnn &obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}
