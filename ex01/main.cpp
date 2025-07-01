#include "Zombie.hpp"

int main()
{
	Zombie* zombiehorde = zombieHorde(5, "Peter");
	delete[] zombiehorde;
	return (0);
}