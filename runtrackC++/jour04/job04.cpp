#include <iostream>

int main() {
    // Création des variables contenant des entiers
    int a = 10;
    int b = 20;
    int c = 30;

    // Création des pointeurs vers ces variables
    int *ptr_a = &a;
    int *ptr_b = &b;
    int *ptr_c = &c;

    // Affichage des valeurs initiales des variables
    std::cout << "Valeurs initiales des variables :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // Modification des valeurs pointées par les pointeurs
    *ptr_a = 100;
    *ptr_b = 200;
    *ptr_c = 300;

    // Affichage des nouvelles valeurs des variables
    std::cout << "Nouvelles valeurs des variables :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}
