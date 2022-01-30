#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout
		<< "Cure default constructor called"
		<< std::endl;
	return ;
}

Cure::Cure(const Cure& obj)
{
	std::cout
		<< "Cure copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Cure::~Cure(void)
{
	std::cout
		<< "Cure destructor called"
		<< std::endl;
	return ;
}

Cure& Cure::operator=(const Cure& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const Cure& i)
{
	o << "something";
	return o;
}
