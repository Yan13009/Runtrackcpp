#include <iostream>

struct Element {
    int entier;
    const char* chaine;
    float flottant;
};

int main() {
    // Initialisation du tableau de structures contenant les valeurs demandées
    Element tableau[] = {{2019, "La Plateforme", 3.14f, "Étudiants"}};

    // Affichage des adresses et valeurs de chaque élément du tableau
    std::cout << "Adresse et valeur de chaque element du tableau :" << std::endl;
    for (size_t i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", Valeurs : ";
        std::cout << "Entier : " << tableau[i].entier << ", Chaine : " << tableau[i].chaine << ", Flottant : " << tableau[i].flottant << ", Chaine : " << tableau[i].chaine << std::endl;
    }

    return 0;
}
