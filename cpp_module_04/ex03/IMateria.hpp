#ifndef IMATERIA_HPP
#define IMATERIA_HPP

class IMateria
{
	public:
		IMateria(void);
		IMateria(const IMateria& obj);
		~IMateria(void);

		IMateria&	operator=(const IMateria& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const IMateria& i);

#endif
