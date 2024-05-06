#include <iostream>

int main() {
    int entier;

    // Demander à l'utilisateur d'entrer un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;

    // Afficher la table de multiplication
    std::cout << "Table de multiplication de " << entier << " :\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " x " << i << " = " << entier * i << std::endl;
    }

    return 0;
}
