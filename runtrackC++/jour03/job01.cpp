#include <iostream>
#include <string>
#include <locale>

int main() {
    // Déclaration de la chaîne de caractères
    std::string phrase = "vive la plateforme !";

    // Transformation en majuscules
    std::locale loc;
    for (char& c : phrase) {
        c = std::toupper(c, loc);
    }

    // Affichage du résultat
    std::cout << phrase << std::endl;

    return 0;
}
