#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat default constructor called"
		<< std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	std::cout
		<< "Bureaucrat copy constructor called"
		<< std::endl;
	*this = obj;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout
		<< "Bureaucrat destructor called"
		<< std::endl;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (this != &obj)
		this->_grade = obj.get_grade();
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::grade_except(void) const throw()
{
	return ("Grade is too high...");
}

const char* Bureaucrat::GradeTooLowException::grade_except(void) const throw()
{
	return ("Grade is too low...");
}

const std::string	Bureaucrat::get_name(void) const
{
	return (this->_name);
}

int	Bureaucrat::get_grade(void) const
{
	return (this->_grade);
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& i)
{
	o
		<< i.get_name()
		<< ", bureaucrat grade "
		<< i.get_grade();
	return o;
}
