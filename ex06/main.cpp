#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <LEVEL>" << std::endl;
		return (1);
	}
	// TODO: switch on the level index
	(void)argv;
	return (0);
}
