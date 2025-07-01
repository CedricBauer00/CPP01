#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : _weapon(nullptr), _name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	if (!_weapon)
	{
		std::cout << "\033[31mHolding no weapon!\033[0m" << std::endl;
		return ;
	}
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}