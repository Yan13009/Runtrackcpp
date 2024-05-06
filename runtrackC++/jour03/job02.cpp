#include <iostream>
#include <string>

int main() {
    // Déclaration de la chaîne de caractères
    std::string phrase = "vive la plateforme !";

    // Suppression des voyelles
    std::string resultat;
    for (char c : phrase) {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') {
            resultat += c;
        }
    }

    // Affichage du résultat
    std::cout << resultat << std::endl;

    return 0;
}
