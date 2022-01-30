#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout
		<< "Ice default constructor called"
		<< std::endl;
	return ;
}

Ice::Ice(const Ice& obj)
{
	std::cout
		<< "Ice copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Ice::~Ice(void)
{
	std::cout
		<< "Ice destructor called"
		<< std::endl;
	return ;
}

Ice& Ice::operator=(const Ice& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Ice& i)
{
	o << "something";
	return o;
}
