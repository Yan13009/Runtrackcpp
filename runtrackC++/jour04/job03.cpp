#include <iostream>
#include <cstring> // Pour utiliser la fonction strlen()

void inverserChaine(char *chaine) {
    int longueur = strlen(chaine); // Calcul de la longueur de la chaîne

    // Définition de deux pointeurs, un pointant sur le début de la chaîne et l'autre sur la fin
    char *debut = chaine;
    char *fin = chaine + longueur - 1;

    // Échange des caractères en utilisant les pointeurs
    while (debut < fin) {
        // Échange des caractères pointés par les pointeurs debut et fin
        char temp = *debut;
        *debut = *fin;
        *fin = temp;

        // Déplacement des pointeurs vers l'intérieur de la chaîne
        debut++;
        fin--;
    }
}

int main() {
    const int tailleMax = 100; // Taille maximale de la chaîne
    char chaine[tailleMax]; // Déclaration de la chaîne

    // Demande à l'utilisateur de saisir une chaîne de caractères
    std::cout << "Veuillez entrer une chaine de caracteres : ";
    std::cin.getline(chaine, tailleMax);

    // Inversion de la chaîne en utilisant des pointeurs
    inverserChaine(chaine);

    // Affichage de la chaîne inversée
    std::cout << "La chaine inversee est : " << chaine << std::endl;

    return 0;
}
