#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:

		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& pr);
		virtual ~PlasmaRifle();

		PlasmaRifle&	operator=(const PlasmaRifle& pr);

		virtual void	attack() const;
	
	private:

		static const std::string	_baseName;
		static const int			_baseDamage;
		static const int			_baseAPCost;
};

#endif