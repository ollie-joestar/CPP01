#include <string>
#include <iostream>

int	main() {
	std::cout << "Initializing the string, pointer and refference" << std::endl;

	std::string theString = "HI THIS IS BRAIN";
	std::string *stringPTR = &theString;
	std::string stringREF = *stringPTR;
	// std::string &stringREF = theString;

	std::cout << "----------" << std::endl;

	std::cout << "Address of theString itself:\t" << &theString << std::endl;
	std::cout << "Address held by stringPTR:\t" << &stringPTR << std::endl;
	std::cout << "Address held by stringREF:\t" << &stringREF << std::endl;

	std::cout << "----------" << std::endl;

	std::cout << "Value of theString:\t" << theString << std::endl;
	std::cout << "Value at stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Value at stringREF:\t" << stringREF << std::endl;

	return 0;
}
