#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *new_zombie_array;

    if (N <= 0) {
        std::cout << "N is invalid" << std::endl;
        return (0);
    }
    new_zombie_array = new Zombie[N];
    for (int i = 0; i < N; i++) {
        new_zombie_array[i].setName(name);
    }
    return (new_zombie_array);
}