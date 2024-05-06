#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Pour formater la sortie

// Structure représentant une note d'étudiant
struct Note {
    std::string nom;
    std::string prenom;
    float note;
};

// Fonction pour ajouter une note à la liste
void ajouterNote(std::vector<Note>& listeNotes) {
    Note nouvelleNote;
    std::cout << "Entrez le nom de l'etudiant : ";
    std::cin >> nouvelleNote.nom;
    std::cout << "Entrez le prenom de l'etudiant : ";
    std::cin >> nouvelleNote.prenom;
    std::cout << "Entrez la note de l'etudiant : ";
    std::cin >> nouvelleNote.note;
    listeNotes.push_back(nouvelleNote);
}

// Fonction pour afficher la liste de notes
void afficherListeNotes(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
    } else {
        std::cout << "Liste de notes :" << std::endl;
        std::cout << std::setw(15) << "Nom" << std::setw(15) << "Prenom" << std::setw(10) << "Note" << std::endl;
        for (const auto& note : listeNotes) {
            std::cout << std::setw(15) << note.nom << std::setw(15) << note.prenom << std::setw(10) << note.note << std::endl;
        }
    }
}

// Fonction pour supprimer une note d'un étudiant
void supprimerNote(std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
        return;
    }

    std::string nom, prenom;
    std::cout << "Entrez le nom de l'etudiant dont vous souhaitez supprimer la note : ";
    std::cin >> nom;
    std::cout << "Entrez le prenom de l'etudiant : ";
    std::cin >> prenom;

    for (auto it = listeNotes.begin(); it != listeNotes.end(); ++it) {
        if (it->nom == nom && it->prenom == prenom) {
            listeNotes.erase(it);
            std::cout << "Note de l'etudiant " << nom << " " << prenom << " supprimee avec succes." << std::endl;
            return;
        }
    }

    std::cout << "Note de l'etudiant " << nom << " " << prenom << " introuvable." << std::endl;
}

// Fonction pour calculer la moyenne des notes
float calculerMoyenne(const std::vector<Note>& listeNotes) {
    if (listeNotes.empty()) {
        std::cout << "La liste de notes est vide." << std::endl;
        return 0.0f;
    }

    float somme = 0.0f;
    for (const auto& note : listeNotes) {
        somme += note.note;
    }
    return somme / listeNotes.size();
}

int main() {
    std::vector<Note> listeNotes; // Liste de notes

    int choix;
    do {
        // Affichage du menu
        std::cout << "\nMenu :" << std::endl;
        std::cout << "1. Ajouter une note" << std::endl;
        std::cout << "2. Afficher la liste de notes" << std::endl;
        std::cout << "3. Supprimer une note d'un etudiant" << std::endl;
        std::cout << "4. Afficher la moyenne des notes" << std::endl;
        std::cout << "5. Quitter" << std::endl;
        std::cout << "Entrez votre choix : ";
        std::cin >> choix;

        // Traitement du choix de l'utilisateur
        switch (choix) {
            case 1:
                ajouterNote(listeNotes);
                break;
            case 2:
                afficherListeNotes(listeNotes);
                break;
            case 3:
                supprimerNote(listeNotes);
                break;
            case 4:
                std::cout << "Moyenne des notes : " << std::fixed << std::setprecision(2) << calculerMoyenne(listeNotes) << std::endl;
                break;
            case 5:
                std::cout << "Au revoir !" << std::endl;
                break;
            default:
                std::cout << "Choix invalide. Veuillez reessayer." << std::endl;
        }
    } while (choix != 5);

    return 0;
}
