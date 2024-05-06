#include <iostream>
#include <cstdlib> // Pour la fonction rand()
#include <ctime> // Pour initialiser le générateur de nombres aléatoires avec l'heure actuelle

int main() {
    // Initialisation du générateur de nombres aléatoires
    srand(time(nullptr));

    const int nombreMystere = rand() % 101; // Génère un nombre aléatoire entre 0 et 100
    int nombreEssaisMax = 10; // Nombre maximum d'essais
    int nombreEssais = 0; // Nombre d'essais effectués par le joueur
    int choixJoueur;

    std::cout << "Bienvenue dans le jeu du Nombre Mystere !" << std::endl;
    std::cout << "Devinez le nombre mystere compris entre 0 et 100." << std::endl;

    // Boucle tant que le joueur a des essais restants
    while (nombreEssais < nombreEssaisMax) {
        std::cout << "Essai #" << nombreEssais + 1 << "/" << nombreEssaisMax << " : ";
        std::cin >> choixJoueur;

        // Vérification si le nombre choisi est correct
        if (choixJoueur == nombreMystere) {
            std::cout << "Bravo ! Vous avez devine le nombre mystere en " << nombreEssais + 1 << " essais !" << std::endl;
            return 0;
        } else if (choixJoueur < nombreMystere) {
            std::cout << "Trop petit !" << std::endl;
        } else {
            std::cout << "Trop grand !" << std::endl;
        }

        nombreEssais++;
    }

    // Si le joueur n'a pas trouvé le nombre mystère dans le nombre d'essais maximum
    std::cout << "Dommage ! Le nombre mystere etait : " << nombreMystere << std::endl;
    std::cout << "Meilleure chance la prochaine fois !" << std::endl;

    return 0;
}
