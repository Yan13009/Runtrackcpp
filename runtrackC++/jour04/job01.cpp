#include <iostream>

int main() {
    int number = 2019; // Déclaration de la variable "number"
    int *ptr_number = &number; // Déclaration d'un pointeur pointant vers "number"

    // Affichage de la valeur de "number" à l'aide du pointeur
    std::cout << "La valeur de \"number\" est : " << *ptr_number << std::endl;

    return 0;
}
