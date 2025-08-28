#include "Zombie.hpp"

int main() {
	int	amount = 5;
	std::cout << "-----" << std::endl;
	std::cout << "Initializing horde of " << amount << " zombies" << std::endl;
	std::cout << "-----" << std::endl;
	Zombie *horde = zombieHorde(amount, "idiot");

	for (int i = 0; i < amount; i++)
		horde[i].announce();

	std::cout << "-----" << std::endl;

	delete[] horde;
	return 0;
}
