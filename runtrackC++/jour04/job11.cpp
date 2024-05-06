#include <iostream>
#include <string>

int main() {
    // Tableau de fruits initial
    std::string fruits[] = {"pomme", "banane", "orange", "kiwi", "fraise"};

    // Affichage du contenu du tableau "fruit"
    std::cout << "Contenu du tableau 'fruit' :" << std::endl;
    for (const auto& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // Demande à l'utilisateur du nombre de fruits préférés
    int nombreFavoris;
    std::cout << "Entrez le nombre de fruits favoris que vous avez : ";
    std::cin >> nombreFavoris;

    // Allocation dynamique du tableau "favoris"
    std::string *favoris = new std::string[nombreFavoris];

    // Demande à l'utilisateur d'entrer ses fruits favoris
    std::cout << "Entrez vos " << nombreFavoris << " fruits favoris :" << std::endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        std::cout << "Fruit " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    // Affichage du contenu du tableau "favoris"
    std::cout << "Contenu du tableau 'favoris' :" << std::endl;
    for (int i = 0; i < nombreFavoris; ++i) {
        std::cout << favoris[i] << std::endl;
    }

    // Libération de la mémoire allouée dynamiquement
    delete[] favoris;

    return 0;
}
