#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position en abscisse
    int y; // Position en ordonnée

public:
    // Constructeur par défaut
    Joueur() : x(0), y(0) {}

    // Méthode pour initialiser les valeurs des attributs
    void setPosition(int newX, int newY) {
        x = newX;
        y = newY;
    }

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
