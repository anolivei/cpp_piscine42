#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

class MateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& obj);
		~MateriaSource(void);

		MateriaSource&	operator=(const MateriaSource& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const MateriaSource& i);

#endif
