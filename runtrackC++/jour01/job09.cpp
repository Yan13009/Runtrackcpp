#include <iostream>

int main() {
    int nombre1, nombre2, nombre3;

    // Demander à l'utilisateur d'entrer trois entiers
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    std::cout << "Entrez le troisième nombre : ";
    std::cin >> nombre3;

    // Trouver le plus grand nombre parmi les trois
    int plusGrand = nombre1; // Supposons que nombre1 est le plus grand initialement

    if (nombre2 > plusGrand) {
        plusGrand = nombre2;
    }

    if (nombre3 > plusGrand) {
        plusGrand = nombre3;
    }

    // Afficher le plus grand nombre
    std::cout << "Le plus grand des trois nombres est : " << plusGrand << std::endl;

    return 0;
}
