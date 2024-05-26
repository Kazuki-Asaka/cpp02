#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Harl harl;

		std::string str = argv[1];
		harl.complain(str);
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q harlFilter");
// }