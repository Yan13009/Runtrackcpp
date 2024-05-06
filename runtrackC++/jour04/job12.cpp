#include <iostream>
#include <string>
#include <vector>

// Définition de la structure Staff
struct Staff {
    std::string nom;
    std::string prenom;
};

int main() {
    // Ajout de deux membres du staff dans la structure Staff
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};

    // Affichage des prénoms des membres du staff
    std::cout << "Prénoms des membres du staff :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    // Création d'une nouvelle structure Etudiant
    struct Etudiant {
        std::string nom;
        std::string prenom;
    };

    // Demande à l'utilisateur de saisir le nombre d'étudiants
    int nombreEtudiants;
    std::cout << "Entrez le nombre d'étudiants : ";
    std::cin >> nombreEtudiants;

    // Création d'un vecteur pour stocker les étudiants
    std::vector<Etudiant> listeEtudiants;

    // Saisie des noms et prénoms des étudiants
    for (int i = 0; i < nombreEtudiants; ++i) {
        Etudiant etudiant;
        std::cout << "Nom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiant.nom;
        std::cout << "Prénom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiant.prenom;
        listeEtudiants.push_back(etudiant);
    }

    // Affichage des prénoms des différents étudiants
    std::cout << "\nPrénoms des différents étudiants :" << std::endl;
    for (const auto& etudiant : listeEtudiants) {
        std::cout << etudiant.prenom << std::endl;
    }

    return 0;
}
