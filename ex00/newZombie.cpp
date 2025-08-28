#include "Zombie.hpp"

// Its on heap so delete() if afterwards!!!
Zombie	*newZombie(std::string name) {
	Zombie* zombie = new Zombie();

	zombie->setName(name);
	return zombie;
}
