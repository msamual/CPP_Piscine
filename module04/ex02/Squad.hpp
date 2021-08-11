#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:

		Squad();
		Squad(const Squad& squad);
		virtual ~Squad();

		Squad&					operator=(const Squad& squad);
		
		virtual int				getCount() const;
		virtual ISpaceMarine*	getUnit(int) const;
		virtual int				push(ISpaceMarine* ism);
	
	private:

		ISpaceMarine**			_units;
		int						_count;
};

#endif