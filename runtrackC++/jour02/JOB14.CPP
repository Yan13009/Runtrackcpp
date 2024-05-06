#include <iostream>
#include <cmath>

// Fonction pour compter le nombre de chiffres dans un nombre
int compterChiffres(int nombre) {
    int chiffres = 0;
    while (nombre != 0) {
        nombre /= 10;
        chiffres++;
    }
    return chiffres;
}

// Fonction pour vérifier si un nombre est narcissique
bool estNarcissique(int nombre) {
    int nombre_original = nombre;
    int somme = 0;
    int puissance = compterChiffres(nombre);
    
    while (nombre != 0) {
        int chiffre = nombre % 10;
        somme += pow(chiffre, puissance);
        nombre /= 10;
    }
    
    return (somme == nombre_original);
}

int main() {
    int nombre;

    // Demande à l'utilisateur d'entrer un nombre
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    // Vérifie si le nombre est narcissique
    if (estNarcissique(nombre)) {
        std::cout << nombre << " est un nombre narcissique." << std::endl;
    } else {
        std::cout << nombre << " n'est pas un nombre narcissique." << std::endl;
    }

    return 0;
}
