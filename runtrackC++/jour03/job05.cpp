#include <iostream>
#include <string>
#include <regex>

int main() {
    // Demande à l'utilisateur de saisir une heure
    std::cout << "Veuillez entrer une heure au format XXhXX : ";
    std::string heure;
    std::getline(std::cin, heure);

    // Expression régulière pour vérifier le format XXhXX
    std::regex formatHeure("\\b[0-9]{1,2}h[0-9]{1,2}\\b");

    // Vérification si l'heure correspond au format attendu
    if (std::regex_match(heure, formatHeure)) {
        std::cout << "L'heure est au format valide." << std::endl;
    } else {
        std::cout << "L'heure n'est pas au format valide." << std::endl;
    }

    return 0;
}
