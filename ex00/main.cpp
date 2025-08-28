#include "Zombie.hpp"

int	main(void) {
	Zombie basicZombie;
	basicZombie.setName("Basic");
	basicZombie.announce();

	std::cout << "-----" << std::endl;

	Zombie* heapZombie = new Zombie();
	heapZombie->setName("Heap");
	heapZombie->announce();

	std::cout << "-----" << std::endl;

	Zombie* newHeapZombie;
	newHeapZombie = newZombie("NewHeap");
	newHeapZombie->announce();

	std::cout << "-----" << std::endl;

	randomChump("RandomChumpZombie");

	std::cout << "-----" << std::endl;

	delete newHeapZombie;
	delete heapZombie;
	return 0;
}
