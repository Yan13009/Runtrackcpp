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

    // Calcul du nombre d'entiers supérieurs ou égaux à 5
    int nbSup5 = 0;
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            nbSup5++;
        }
    }

    // Affichage du résultat
    std::cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << nbSup5 << std::endl;

    return 0;
}
