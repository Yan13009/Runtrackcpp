#include <iostream>

int main() {
    int a, b;

    // Demande à l'utilisateur d'entrer les bornes a et b
    std::cout << "Entrez la borne inférieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne supérieure b : ";
    std::cin >> b;

    // Affiche tous les entiers de a à b
    std::cout << "Entiers de " << a << " à " << b << " : ";
    int i = a; // Initialisation de l'itérateur
    while (i <= b) {
        std::cout << i << " ";
        i++; // Incrémentation de l'itérateur
    }
    std::cout << std::endl;

    return 0;
}
