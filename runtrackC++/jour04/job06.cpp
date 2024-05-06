#include <iostream>

int main() {
    // Déclaration et initialisation des variables demandées
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme";

    // Affichage des adresses mémoire et des valeurs des variables
    std::cout << "Adresse de la variable \"entier\" : " << &entier << ", Valeur : " << entier << std::endl;
    std::cout << "Adresse de la variable \"flottant\" : " << &flottant << ", Valeur : " << flottant << std::endl;
    std::cout << "Adresse de la variable \"reel\" : " << &reel << ", Valeur : " << reel << std::endl;
    std::cout << "Adresse de la variable \"caractere\" : " << static_cast<const void*>(&caractere) << ", Valeur : " << caractere << std::endl;

    return 0;
}
