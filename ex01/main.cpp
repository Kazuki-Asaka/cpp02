#include "Zombie.hpp"

int main() {
	Zombie *zombie_group;
	Zombie *zombie_group1;
	int	n;

	n = 5;
	zombie_group = zombieHorde(n, "akazuki");
	for (int i = 0; i < n;i++) {
		zombie_group[i].announce();
	}
	n = 0;
	zombie_group1 = zombieHorde(n, "akazuki");
	delete[] zombie_group;
	return (0);
}

// __attribute__((destructor))
// static void destructor(void){
//     system("leaks -q ex01");
// }