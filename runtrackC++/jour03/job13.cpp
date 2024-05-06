#include <iostream>

void fusionnerTableaux(const int tableau1[], int taille1, const int tableau2[], int taille2, int tableauFusionne[]) {
    int i = 0, j = 0, k = 0;

    // Fusion des tableaux jusqu'à ce que l'un des deux tableaux soit entièrement parcouru
    while (i < taille1 && j < taille2) {
        if (tableau1[i] < tableau2[j]) {
            tableauFusionne[k++] = tableau1[i++];
        } else {
            tableauFusionne[k++] = tableau2[j++];
        }
    }

    // Ajout des éléments restants du premier tableau s'il en reste
    while (i < taille1) {
        tableauFusionne[k++] = tableau1[i++];
    }

    // Ajout des éléments restants du deuxième tableau s'il en reste
    while (j < taille2) {
        tableauFusionne[k++] = tableau2[j++];
    }
}

int main() {
    const int taille1 = 5; // Taille du premier tableau
    const int taille2 = 4; // Taille du deuxième tableau
    int tableau1[taille1] = {1, 3, 5, 7, 9}; // Premier tableau trié
    int tableau2[taille2] = {2, 4, 6, 8}; // Deuxième tableau trié
    const int tailleFusion = taille1 + taille2; // Taille du tableau fusionné
    int tableauFusionne[tailleFusion]; // Tableau fusionné

    // Appel de la fonction de fusion des tableaux
    fusionnerTableaux(tableau1, taille1, tableau2, taille2, tableauFusionne);

    // Affichage du tableau fusionné
    std::cout << "Tableau fusionne : ";
    for (int i = 0; i < tailleFusion; ++i) {
        std::cout << tableauFusionne[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
