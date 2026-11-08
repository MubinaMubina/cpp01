#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--- Heap zombie (newZombie) ---" << std::endl;
	Zombie*	heapZombie = newZombie("Foo");
	heapZombie->announce();

	std::cout << "\n--- Stack zombie (randomChump) ---" << std::endl;
	randomChump("Bar");

	std::cout << "\n--- Foo is still alive after randomChump ---" << std::endl;
	heapZombie->announce();

	std::cout << "\n--- Deleting Foo ---" << std::endl;
	delete heapZombie;

	std::cout << "\n--- Stack zombie in main scope ---" << std::endl;
	{
		Zombie	local("Baz");
		local.announce();
	}
	std::cout << "(Baz died at the end of its scope)" << std::endl;
	return (0);
}
