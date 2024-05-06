#include <iostream>

// Définition de la structure Point
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une variable de type Point
    Point p;

    // Initialisation des membres de la structure
    p.x = 5;
    p.y = 10;

    // Déclaration d'un pointeur vers la structure Point et initialisation avec l'adresse de p
    Point *ptr_point = &p;

    // Accès et modification des membres de la structure à travers le pointeur
    ptr_point->x = 20;
    ptr_point->y = 30;

    // Affichage des nouvelles valeurs des membres de la structure
    std::cout << "Nouvelle valeur de x : " << p.x << std::endl;
    std::cout << "Nouvelle valeur de y : " << p.y << std::endl;

    return 0;
}
