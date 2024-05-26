#include "Harl.hpp"

int main() {
	Harl harl;

    harl.complain("DEBUG");
    std::cout << "--------------------------------------------" << std::endl;
    harl.complain("INFO");
    std::cout << "--------------------------------------------" << std::endl;
    harl.complain("WARNING");
    std::cout << "--------------------------------------------" << std::endl;
    harl.complain("ERROR");
    std::cout << "--------------------------------------------" << std::endl;
    harl.complain("e");
    std::cout << "--------------------------------------------" << std::endl;

    return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q ex05");
// }