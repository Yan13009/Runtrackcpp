#include <iostream>

int main() {
    const int taille = 10; // Taille du tableau
    int T[taille]; // Déclaration du tableau

    // Demande à l'utilisateur de saisir 10 entiers
    std::cout << "Veuillez saisir 10 entiers : " << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i+1 << " : ";
        std::cin >> T[i];
    }

    // Recherche de l'indice du plus grand élément
    int indiceMax = 0;
    for (int i = 1; i < taille; ++i) {
        if (T[i] > T[indiceMax]) {
            indiceMax = i;
        }
    }

    // Affichage du résultat
    std::cout << "L'indice du plus grand élément est : " << indiceMax << std::endl;

    return 0;
}
