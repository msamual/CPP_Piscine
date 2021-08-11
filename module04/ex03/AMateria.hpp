#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
class ICharacter;



class AMateria
{
	private:
		
		std::string		_type;
		unsigned int	_xp;
	
	public:
		
		AMateria(std::string const& type);
		AMateria(const AMateria& am);
		virtual ~AMateria();
		
		AMateria&				operator=(const AMateria& am);

		std::string const&		getType() const;
		unsigned int			getXP() const;
		
		void					setType(std::string const& type);
		void					setXP(unsigned int xp);
		
		virtual AMateria*		clone() const = 0;
		virtual void			use(ICharacter& target);
};

#endif

