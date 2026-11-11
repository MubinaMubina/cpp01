#include <iostream>
#include <fstream>
#include <iterator>
#include <string>


int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
	{
		std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if(s1.empty())
	{	
		std::cerr << "Error: s1 must not be empty" << std::endl;
		return (1);
	}


	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open input file " << filename << std::endl;
		return (1);
	}

	inputFile.seekg(0, std::ios::end);
	std::streamoff fileSize = inputFile.tellg();
	inputFile.seekg(0, std::ios::beg);

	std::string content((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
	if (fileSize < 0 || static_cast<std::streamoff>(content.size()) != fileSize)
	{
		std::cerr << "Error: Could not read input file " << filename << std::endl;
		return (1);
	}

	std::ofstream outputFile((filename + ".replace").c_str());
	if( !outputFile.is_open())
	{
		std::cerr << "Error: Could not open output file " << filename + ".replace" << std::endl;
		return (1);
	}

	std::string result;
	size_t pos = 0;
	while (true)
	{
		size_t found = content.find(s1, pos);
		if (found == std::string::npos)
		{
			result.append(content.substr(pos));
			break;
		}
		result.append(content.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.length();
	}

	outputFile << result;
	inputFile.close();
	outputFile.close();
	return (0);
}
