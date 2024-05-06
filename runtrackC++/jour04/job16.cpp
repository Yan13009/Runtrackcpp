#include <iostream>

// Fonction pour trouver la valeur maximale dans un tableau d'entiers
int trouverMax(const int tableau[], int taille) {
    // Vérification de la taille du tableau
    if (taille == 0) {
        std::cerr << "Erreur : Le tableau est vide !" << std::endl;
        return -1; // Retourne une valeur d'erreur
    }

    // Initialisation de la valeur maximale avec la première valeur du tableau
    int max = tableau[0];

    // Parcours du tableau pour trouver la valeur maximale
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Retourne la valeur maximale trouvée
    return max;
}

int main() {
    // Déclaration et initialisation du tableau
    int tableau[] = {5, 10, 2, 8, 15, 3};

    // Calcul de la valeur maximale dans le tableau
    int max = trouverMax(tableau, sizeof(tableau) / sizeof(tableau[0]));

    // Affichage de la valeur maximale
    std::cout << "La valeur maximale dans le tableau est : " << max << std::endl;

    return 0;
}
