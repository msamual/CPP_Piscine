#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:

		PowerFist();
		PowerFist(const PowerFist& pr);
		virtual ~PowerFist();

		PowerFist&	operator=(const PowerFist& pr);

		virtual void	attack() const;
	
	private:

		static const std::string	_baseName;
		static const int			_baseDamage;
		static const int			_baseAPCost;
};

#endif