#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type) : _hp(hp), _type(type)
{}

Enemy::Enemy(const Enemy& enemy)
{
	this->operator=(enemy);
}

Enemy::~Enemy()
{}

Enemy&				Enemy::operator=(const Enemy& enemy)
{
	this->_hp	= enemy._hp;
	this->_type	= enemy._type;
	return *this;
}

std::string const&	Enemy::getType() const
{
	return this->_type;
}

int					Enemy::getHP() const
{
	return this->_hp;
}

void				Enemy::takeDamage(int amount)
{
	if (this->_hp <= 0)
		return ;
	if (amount > this->_hp)
	{
		this->_hp = 0;
		delete this;
	} 
	else
		this->_hp -= amount;
}