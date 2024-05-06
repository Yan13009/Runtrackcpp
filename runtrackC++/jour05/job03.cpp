#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position en abscisse
    int y; // Position en ordonnée
    std::string nom; // Nom du joueur

public:
    // Constructeur par défaut
    Joueur() : x(0), y(0), nom("Joueur") {}

    // Constructeur prenant en paramètre les valeurs de x et y
    Joueur(int initialX, int initialY) : x(initialX), y(initialY), nom("Joueur") {}

    // Constructeur prenant en paramètre les valeurs de x, y et nom
    Joueur(int initialX, int initialY, const std::string& nomJoueur) : x(initialX), y(initialY), nom(nomJoueur) {}

    // Méthode pour afficher les attributs
    void afficherPosition() {
        std::cout << "Position du joueur " << nom << " : (" << x << ", " << y << ")" << std::endl;
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
    // Instanciation de la classe Joueur avec différents constructeurs
    Joueur joueur1; // Constructeur par défaut
    Joueur joueur2(3, 5); // Constructeur prenant en paramètre les valeurs de x et y
    Joueur joueur3(1, 2, "Alice"); // Constructeur prenant en paramètre les valeurs de x, y et nom

    // Affichage de la position initiale des joueurs
    joueur1.afficherPosition();
    joueur2.afficherPosition();
    joueur3.afficherPosition();

    return 0;
}



