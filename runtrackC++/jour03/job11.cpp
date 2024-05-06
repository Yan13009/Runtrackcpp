#include <iostream>

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] % 2 == 0) { // Vérifie si l'élément est pair
            somme += tableau[i]; // Ajoute l'élément pair à la somme
        }
    }
    return somme;
}

int main() {
    const int taille = 5; // Taille du tableau
    int tableau[taille]; // Déclaration du tableau

    // Demande à l'utilisateur de saisir les éléments du tableau
    std::cout << "Veuillez entrer " << taille << " entiers : ";
    for (int i = 0; i < taille; ++i) {
        std::cin >> tableau[i];
    }

    // Appel de la fonction sommeElementsPairs pour calculer la somme des éléments pairs
    int somme_pairs = sommeElementsPairs(tableau, taille);

    // Affichage de la somme des éléments pairs
    std::cout << "La somme des elements pairs du tableau est : " << somme_pairs << std::endl;

    return 0;
}
