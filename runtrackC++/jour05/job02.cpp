#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position en abscisse
    int y; // Position en ordonnée

public:
    // Constructeur avec initialisation des valeurs des attributs
    Joueur(int initialX = 0, int initialY = 0) : x(initialX), y(initialY) {}

    // Méthode pour afficher les attributs
    void afficherPosition() {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deltaX, int deltaY) {
        x += deltaX;
        y += deltaY;
    }
};

#endif // JOUEUR_HPP

"main.cpp"
#include <iostream>
#include "Joueur.hpp" // Inclusion du fichier d'en-tête de la classe Joueur

int main() {
    // Instanciation de la classe Joueur avec initialisation des valeurs des attributs
    Joueur joueur(3, 5);

    // Affichage de la position initiale du joueur
    joueur.afficherPosition();

    // Déplacement du joueur
    joueur.deplacer(2, -1);

    // Affichage de la nouvelle position du joueur
    joueur.afficherPosition();

    return 0;
}
