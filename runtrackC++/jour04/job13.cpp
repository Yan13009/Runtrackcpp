#include <iostream>
#include <string>
#include <vector>

// Structure pour stocker les informations sur une destination et son temps de vol
struct Vol {
    std::string destination;
    int tempsDeVol;
};

int main() {
    // Vecteur de pointeurs vers des structures Vol
    std::vector<Vol*> listeVols;

    // Demander à l'utilisateur de saisir des destinations et temps de vol depuis Marseille
    char continuer;
    do {
        Vol* nouveauVol = new Vol;
        std::cout << "Entrez la destination : ";
        std::cin >> nouveauVol->destination;
        std::cout << "Entrez le temps de vol depuis Marseille (en heures) : ";
        std::cin >> nouveauVol->tempsDeVol;
        listeVols.push_back(nouveauVol);

        std::cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        std::cin >> continuer;
    } while (continuer == 'o' || continuer == 'O');

    // Affichage des données de chaque vol
    std::cout << "\nListe des vols depuis Marseille :" << std::endl;
    for (size_t i = 0; i < listeVols.size(); ++i) {
        std::cout << "Destination : " << listeVols[i]->destination << ", Temps de vol : " << listeVols[i]->tempsDeVol << " heures" << std::endl;
    }

    // Modification des données de chaque vol
    for (size_t i = 0; i < listeVols.size(); ++i) {
        std::cout << "\nModification du vol vers " << listeVols[i]->destination << std::endl;
        std::cout << "Entrez la nouvelle destination : ";
        std::cin >> listeVols[i]->destination;
        std::cout << "Entrez le nouveau temps de vol depuis Marseille (en heures) : ";
        std::cin >> listeVols[i]->tempsDeVol;
    }

    // Libération de la mémoire allouée dynamiquement
    for (size_t i = 0; i < listeVols.size(); ++i) {
        delete listeVols[i];
    }

    return 0;
}
