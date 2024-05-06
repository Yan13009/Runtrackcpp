#include <iostream>

// Fonction pour calculer la factorielle
unsigned long long factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre entier
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    // Vérifie si le nombre est négatif
    if (nombre < 0) {
        std::cout << "Erreur : Le nombre doit être un entier positif ou nul." << std::endl;
        return 1; // Quitte le programme avec un code d'erreur
    }

    // Calcule et affiche la factorielle du nombre
    unsigned long long resultat = factorielle(nombre);
    std::cout << nombre << "! = " << resultat << std::endl;

    return 0;
}
