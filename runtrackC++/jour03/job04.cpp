#include <iostream>
#include <string>

int main() {
    // Déclaration de la chaîne de caractères
    std::string phrase = "Vive la plateforme !";

    // Calcul de la longueur de la chaîne
    int longueur = phrase.size(); // Utilisation de size() au lieu de length()

    // Affichage du résultat
    std::cout << "La taille est " << longueur << std::endl;

    return 0;
}
