#include <iostream>

int main() {
    int limite;

    // Demande à l'utilisateur d'entrer la limite
    std::cout << "Entrez la limite de la suite de Fibonacci : ";
    std::cin >> limite;

    // Vérifie si la limite est valide
    if (limite <= 0) {
        std::cout << "La limite doit être un entier positif." << std::endl;
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Initialisation des premiers termes de la suite de Fibonacci
    int terme1 = 0, terme2 = 1;

    // Affichage des termes de la suite de Fibonacci jusqu'à la limite
    std::cout << "Suite de Fibonacci jusqu'à la limite " << limite << " : ";
    while (terme1 <= limite) {
        std::cout << terme1 << " ";
        int terme_suivant = terme1 + terme2;
        terme1 = terme2;
        terme2 = terme_suivant;
    }
    std::cout << std::endl;

    return 0;
}
