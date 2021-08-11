#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	protected:
	
		int					_hp;
		std::string			_type;
	
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy& enemy);
		virtual ~Enemy();

		Enemy&			operator=(const Enemy& enemy);

		std::string const&	getType() const;
		int					getHP() const;
		virtual void		takeDamage(int amount);
};

#endif