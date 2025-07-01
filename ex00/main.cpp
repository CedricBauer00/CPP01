#include "Zombie.hpp"

int main()
{
	Zombie *newzombie = newZombie("Gustav");
	newzombie->announce();
	delete	newzombie;
	randomChump("Georg");
	return (0);
}