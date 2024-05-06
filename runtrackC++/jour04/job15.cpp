#include <iostream>

int main() {
    // Déclaration et initialisation du tableau
    int tableau[] = {1, 2, 3, 4, 5};

    // Utilisation d'une boucle et de références pour afficher les valeurs du tableau
    std::cout << "Valeurs du tableau : ";
    for (int& valeur : tableau) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}
