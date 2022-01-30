#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>

class Ice
{
	public:
		Ice(void);
		Ice(const Ice& obj);
		~Ice(void);

		Ice&	operator=(const Ice& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const Ice& i);

#endif
