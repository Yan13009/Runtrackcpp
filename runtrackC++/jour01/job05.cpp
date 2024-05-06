#include <iostream>

int main() {
    double nombre1, nombre2, produit;

    // Demander à l'utilisateur d'entrer le premier nombre
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    // Demander à l'utilisateur d'entrer le deuxième nombre
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    // Multiplier les deux nombres
    produit = nombre1 * nombre2;

    // Afficher le résultat de la multiplication
    std::cout << "Le produit de " << nombre1 << " et " << nombre2 << " est : " << produit << std::endl;

    return 0;
}
