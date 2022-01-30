#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(const ICharacter& obj);
		~ICharacter(void);

		ICharacter&	operator=(const ICharacter& obj);

	private:

	protected:
};

std::ostream&	operator<<(std::ostream& o, const ICharacter& i);

#endif
