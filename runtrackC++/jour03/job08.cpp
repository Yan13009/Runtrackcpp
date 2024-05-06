#include <iostream>
#include <cstring> // Pour la fonction strlen()

int main() {
    const int tailleMax = 100; // Taille maximale de la chaîne
    char tab[tailleMax]; // Déclaration du tableau

    // Demande à l'utilisateur de saisir une chaîne de caractères
    std::cout << "Veuillez entrer une chaine de caracteres : ";
    std::cin.getline(tab, tailleMax); // Permet de lire une ligne avec espaces

    // Ajout du caractère de fin de chaîne '\0' à la fin du tableau
    int longueur = strlen(tab); // Calcule la longueur de la chaîne
    tab[longueur] = '\0'; // Ajoute le caractère de fin de chaîne

    // Affichage du tableau
    std::cout << "Le tableau contient : " << tab << std::endl;

    return 0;
}
