#include <iostream>

int main() {
    // Initialisation du tableau statique d'entiers avec des valeurs choisies
    int tableau[] = {10, 20, 30, 40, 50};

    // Affichage des adresses mémoire et des valeurs de chaque élément du tableau
    std::cout << "Adresse et valeur de chaque element du tableau :" << std::endl;
    for (size_t i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", Valeur : " << tableau[i] << std::endl;
    }

    return 0;
}
