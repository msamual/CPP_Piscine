#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	private:

		std::string		_name;


	public:

		TacticalMarine();
		TacticalMarine(const TacticalMarine& tm);
		virtual ~TacticalMarine();

		TacticalMarine&				operator=(const TacticalMarine& tm);

		virtual ISpaceMarine*	clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
};

#endif
