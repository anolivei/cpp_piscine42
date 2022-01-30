#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout
		<< "MateriaSource default constructor called"
		<< std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	std::cout
		<< "MateriaSource copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout
		<< "MateriaSource destructor called"
		<< std::endl;
	return ;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& obj)
{
	if (this != &obj)
	{
		this->XXX = obj.XXX();
	}
	return (*this);
}

std::ostream&	operator<<(std::ostream& o, const MateriaSource& i)
{
	o << "something";
	return o;
}
