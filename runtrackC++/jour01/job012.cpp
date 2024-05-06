#include <iostream>

int main() {
    int somme = 0; // Variable pour stocker la somme des entiers
    int entier; // Variable temporaire pour stocker chaque entier saisi par l'utilisateur

    // Demander à l'utilisateur de saisir cinq entiers
    for (int i = 0; i < 5; ++i) {
        std::cout << "Entrez un entier : ";
        std::cin >> entier;
        
        // Ajouter l'entier saisi à la somme accumulée
        somme += entier;
    }

    // Calculer la moyenne en divisant la somme par le nombre total d'entiers (5)
    double moyenne = static_cast<double>(somme) / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}
