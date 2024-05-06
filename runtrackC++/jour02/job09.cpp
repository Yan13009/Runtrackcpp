#include <iostream>

int main() {
    int a, b, entier;

    // Demande à l'utilisateur d'entrer les bornes a et b
    std::cout << "Entrez la borne inférieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne supérieure b : ";
    std::cin >> b;

    // Vérifie que a < b
    if (a >= b) {
        std::cout << "Erreur : a doit être strictement inférieur à b." << std::endl;
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Demande à l'utilisateur d'entrer un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;

    // Vérifie si l'entier est entre a et b
    if (entier >= a && entier <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}
