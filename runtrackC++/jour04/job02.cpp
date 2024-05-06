#include <iostream>

int main() {
    // Déclaration et initialisation des deux variables
    int a = 10;
    int b = 20;

    // Affichage des valeurs initiales
    std::cout << "Avant l'echange : a = " << a << ", b = " << b << std::endl;

    // Déclaration des pointeurs
    int *ptr_a = &a;
    int *ptr_b = &b;

    // Echange des valeurs à travers les pointeurs
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    // Affichage des valeurs après l'échange
    std::cout << "Apres l'echange : a = " << a << ", b = " << b << std::endl;

    return 0;
}
