#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	// TODO: open file, read content, replace s1 by s2 (no std::string::replace),
	//       write to <filename>.replace, handle errors
	return (0);
}
