#include <iostream>
#include <string>

int compareChaines(const std::string& chaine1, const std::string& chaine2) {
    // Vérification de la longueur des chaînes
    if (chaine1.length() != chaine2.length()) {
        return 1; // Les chaînes sont différentes
    }

    // Comparaison caractère par caractère
    for (size_t i = 0; i < chaine1.length(); ++i) {
        if (chaine1[i] != chaine2[i]) {
            return 1; // Les chaînes sont différentes
        }
    }

    return 0; // Les chaînes sont identiques
}

int main() {
    // Déclaration des chaînes de caractères
    std::string chaine1 = "Hello";
    std::string chaine2 = "Hello";

    // Appel de la fonction de comparaison
    int resultat = compareChaines(chaine1, chaine2);

    // Affichage du résultat
    if (resultat == 0) {
        std::cout << "Les chaines sont egales." << std::endl;
    } else {
        std::cout << "Les chaines sont differentes." << std::endl;
    }

    return 0;
}
