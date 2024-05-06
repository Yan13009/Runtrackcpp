#include <iostream>

int main() {
    double note;

    // Demande à l'utilisateur d'entrer la note
    std::cout << "Entrez la note : ";
    std::cin >> note;

    // Vérifie si la note est comprise entre 0 et 20
    if (note >= 0 && note <= 20) {
        // Vérifie si la note est supérieure à 10
        if (note > 10) {
            std::cout << "Validé" << std::endl;
        } else {
            std::cout << "Non validé" << std::endl;
        }
    } else {
        std::cout << "La note doit être comprise entre 0 et 20." << std::endl;
    }

    return 0;
}
