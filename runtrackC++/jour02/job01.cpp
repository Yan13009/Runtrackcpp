#include <iostream>

int main() {
    int n;

    do {
        std::cout << "Entrez un nombre strictement positif : ";
        std::cin >> n;
    } while (n <= 0);

    std::cout << "Vous avez saisi : " << n << std::endl;

    return 0;
}
