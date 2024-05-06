#include <iostream>

int main() {
    int n;

    // Demande à l'utilisateur d'entrer un entier n
    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    // Vérifie si chaque nombre de 1 à n est un multiple de 3 ou de 5
    std::cout << "Multiples de 3 ou de 5 jusqu'à " << n << " : ";
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 || i % 5 == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
