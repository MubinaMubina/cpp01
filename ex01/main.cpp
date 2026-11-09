#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int N = 5;
	int i = 0;

	std::cout << "--- Test 1: horde of 5 ---" << std::endl;
	Zombie* horde = zombieHorde(N, "Walker");

	if (horde)
	{
		while (i < N)
		{
			horde[i].announce();
			i++;
		}
		delete[] horde;
	}

	std::cout << "\n--- Test 2: horde of 1 ---" << std::endl;
	horde = zombieHorde(1, "Lonely");
	if (horde)
	{
		horde[0].announce();
		delete[] horde;
	}

	std::cout << "\n--- Test 3: horde of 0 ---" << std::endl;
	horde = zombieHorde(0, "Nobody");
	if (horde)
		delete[] horde;
	else
		std::cout << "No zombies created (N <= 0), nothing to delete" << std::endl;

	return (0);
}
