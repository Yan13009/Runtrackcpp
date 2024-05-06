#include <iostream>

int main() {
    int n, m;

    // Demander à l'utilisateur de saisir les valeurs de n et m
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;

    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    // Afficher les valeurs de n et m avant l'échange
    std::cout << "Avant l'echange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    // Échanger les valeurs de n et m en utilisant une variable temporaire
    int temp = n;
    n = m;
    m = temp;

    // Afficher les valeurs de n et m après l'échange
    std::cout << "Apres l'echange :" << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    return 0;
}
