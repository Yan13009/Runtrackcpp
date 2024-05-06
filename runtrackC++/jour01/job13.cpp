#include <iostream>

int main() {
    int N;
    int somme = 0;

    // Demander à l'utilisateur de saisir un entier N
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        int cube = i * i * i; // Calculer le cube de l'entier i
        somme += cube; // Ajouter le cube à la somme
    }

    // Afficher la somme des cubes
    std::cout << "La somme des cubes de 5^3 a N^3 est : " << somme << std::endl;

    return 0;
}
