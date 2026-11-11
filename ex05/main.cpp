#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl		harl;
	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; i++)
	{
		std::cout << "--- " << levels[i] << " ---" << std::endl;
		harl.complain(levels[i]);
	}

	std::cout << "--- invalid levels (nothing should be printed) ---" << std::endl;
	harl.complain("NOPE");
	harl.complain("");
	harl.complain("debug");
	harl.complain("DEBUG ");

	return (0);
}
