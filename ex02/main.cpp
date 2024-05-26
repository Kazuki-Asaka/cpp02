#include <iostream>
#include <string>

void	changeValue(std::string& str)
{
	str = "newvalue";
}

int main() {
	// std::string str;
	// std::string *stringPTR = &str;
	// std::string &stringREF = str;

	// str = "HI THIS IS BRAIN";
	// std::cout << str << std::endl;
	// std::cout << stringPTR << std::endl;
	// std::cout << "ref;" << &stringREF << std::endl;

	// std::cout << "------------------------------------------" << std::endl;
	// std::string str1;
	// str1 = "hi";
	// std::cout << str1 << std::endl;
	// stringPTR = &str1;
	// std::cout << stringPTR << std::endl;
	// stringREF = str1;
	// changeValue(str);
	// std::cout << "ref;" << &stringREF << std::endl;
	// std::cout << "refstr;" << stringREF << std::endl;

	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "address of the string variable : " << &str << std::endl;
	std::cout << "address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "address held by stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "value of the string variable : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "------------------------------------------" << std::endl;
	std::cout << std::endl;
	
	std::string str1 = "hi";
	stringPTR = &str1;
	stringREF = str1;

	std::cout << "address of the string variable : " << &str1 << std::endl;
	std::cout << "address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "address held by stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "value of the string variable : " << str << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;

	std::cout << std::endl;
	return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q ex02");
// }