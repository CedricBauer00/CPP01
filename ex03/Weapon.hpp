#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(const std::string& type);
	~Weapon();

	const	std::string& getType();
	void	setType(std::string type);
};

#endif