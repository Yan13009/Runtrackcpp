#include <iostream>

int main() {
    double nombre1, nombre2, somme;

    // Demander à l'utilisateur d'entrer le premier nombre
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    // Demander à l'utilisateur d'entrer le deuxième nombre
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    // Additionner les deux nombres
    somme = nombre1 + nombre2;

    // Afficher le résultat de l'addition
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;

    return 0;
}
