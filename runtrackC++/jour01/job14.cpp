#include <iostream>

int main() {
    int nombre, nombreInverse = 0;

    // Demander à l'utilisateur d'entrer un nombre
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    // Inverser le nombre en utilisant des opérations mathématiques
    while (nombre != 0) {
        int dernierChiffre = nombre % 10; // Extraire le dernier chiffre du nombre
        nombreInverse = nombreInverse * 10 + dernierChiffre; // Ajouter le chiffre à droite du nombre inversé
        nombre /= 10; // Supprimer le dernier chiffre du nombre
    }

    // Afficher le nombre inversé
    std::cout << "Le nombre inverse est : " << nombreInverse << std::endl;

    return 0;
}
