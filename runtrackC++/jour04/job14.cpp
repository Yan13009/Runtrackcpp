#include <iostream>

int main() {
    // Création de la variable x contenant l'entier 12
    int x = 12;

    // Affichage de la valeur initiale de x
    std::cout << "Valeur initiale de x : " << x << std::endl;

    // Déclaration d'une référence modifiable à la variable x
    int& referenceX = x;

    // Modification de la valeur de x à travers la référence
    referenceX = 24;

    // Affichage de la nouvelle valeur de x
    std::cout << "Nouvelle valeur de x : " << x << std::endl;

    return 0;
}
