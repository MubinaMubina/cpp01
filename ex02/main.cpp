#include <iostream>
#include <string>


int	main(void)
{
	std::string string_name = "HI THIS IS BRAIN";
	std::string* stringPTR = &string_name;
	std::string& stringREF = string_name;
	
	std::cout << &string_name << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string_name << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return (0);
}
