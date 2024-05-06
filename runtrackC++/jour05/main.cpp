#include <iostream>
#include "Joueur.hpp" // Inclusion du fichier d'en-tête de la classe Joueur

int main() {
    // Instanciation de la classe Joueur
    Joueur joueur;

    // Affichage de la position initiale du joueur
    joueur.afficherPosition();

    // Déplacement du joueur
    joueur.deplacer(2, 3);

    // Affichage de la nouvelle position du joueur
    joueur.afficherPosition();

    // Déplacement supplémentaire du joueur
    joueur.deplacer(-1, 4);

    // Affichage de la nouvelle position du joueur
    joueur.afficherPosition();

    return 0;
}
