#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	private:
		
		std::string		_name;
	
	
	public:
		
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& at);
		virtual ~AssaultTerminator();
	
		AssaultTerminator&				operator=(const AssaultTerminator& at);
	
		virtual ISpaceMarine*	clone() const;
		virtual void			battleCry() const;
		virtual void			rangedAttack() const;
		virtual void			meleeAttack() const;
};

#endif