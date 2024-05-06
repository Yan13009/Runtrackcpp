#include <iostream>
#include <string>
#include <algorithm> // Pour la fonction std::sort

int main() {
    // Demande à l'utilisateur de saisir une chaîne de caractères
    std::string chaine;
    std::cout << "Veuillez entrer une chaine de caracteres : ";
    std::getline(std::cin, chaine);

    // Création de la deuxième variable contenant "Bonjour"
    std::string chaine2 = "Bonjour";

    // Triage des deux chaînes dans l'ordre lexicographique
    std::sort(chaine.begin(), chaine.end());
    std::sort(chaine2.begin(), chaine2.end());

    // Affichage des chaînes triées
    std::cout << "Chaine 1 triee : " << chaine << std::endl;
    std::cout << "Chaine 2 triee : " << chaine2 << std::endl;

    return 0;
}
