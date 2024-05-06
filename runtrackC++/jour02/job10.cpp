#include <iostream>
#include <cmath> // Pour la fonction sqrt

int main() {
    double nombre;

    while (true) {
        // Demande à l'utilisateur d'entrer un nombre
        std::cout << "Entrez un nombre (0 pour arrêter) : ";
        std::cin >> nombre;

        // Vérifie si l'utilisateur a entré 0 pour arrêter le programme
        if (nombre == 0) {
            std::cout << "Programme terminé." << std::endl;
            break; // Quitte la boucle
        }

        // Vérifie si le nombre est négatif
        if (nombre < 0) {
            std::cout << "Erreur : Le nombre doit être positif." << std::endl;
            continue; // Passe à l'itération suivante de la boucle
        }

        // Calcule et affiche la racine carrée du nombre
        double racine_carree = sqrt(nombre);
        std::cout << "La racine carrée de " << nombre << " est : " << racine_carree << std::endl;
    }

    return 0;
}
