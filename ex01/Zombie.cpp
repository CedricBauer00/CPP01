#include "Zombie.hpp"

Zombie::Zombie() : name("") {}

Zombie::~Zombie( void )
{
	std::cout << name << " died!" << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

