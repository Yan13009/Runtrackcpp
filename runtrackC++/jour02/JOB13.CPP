#include <iostream>

int main() {
    // Boucle extérieure pour les multiplicateurs de 1 à 10
    for (int i = 1; i <= 10; ++i) {
        // Boucle intérieure pour les multiplications de 1 à 10
        for (int j = 1; j <= 10; ++j) {
            // Affiche le produit de i et j (la table de multiplication)
            std::cout << i << " x " << j << " = " << (i * j) << "\t";
        }
        // Saut de ligne après chaque fin de ligne de la table
        std::cout << std::endl;
    }

    return 0;
}
