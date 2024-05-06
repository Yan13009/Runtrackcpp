#include <iostream>

int main() {
    int a, b;

    // Demande à l'utilisateur d'entrer les bornes a et b
    std::cout << "Entrez la borne inférieure a : ";
    std::cin >> a;

    std::cout << "Entrez la borne supérieure b : ";
    std::cin >> b;

    // Affiche tous les entiers de a à b
    std::cout << "Entiers de " << a << " à " << b << " : ";
    for (int i = a; i <= b; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
