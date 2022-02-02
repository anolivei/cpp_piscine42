#ifndef nnn_HPP
#define nnn_HPP

#include <iostream>

class nnn
{
	public:
		nnn(void);
		nnn(const nnn& obj);
		virtual ~nnn(void);

		nnn&	operator=(const nnn& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const nnn& i);

#endif
