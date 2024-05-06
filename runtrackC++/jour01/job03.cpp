#include <iostream>

int main() {
    int N;
    
    // Demander à l'utilisateur d'entrer N
    std::cout << "Entrez un nombre entier N : ";
    std::cin >> N;
    
    // Vérifier que N est positif ou nul
    while (N != 0) {
        // Afficher "Hello World" N fois
        for (int i = 0; i < N; ++i) {
            std::cout << "Hello World" << std::endl;
        }
        
        // Demander à l'utilisateur d'entrer N à nouveau
        std::cout << "Entrez un nombre entier N (0 pour quitter) : ";
        std::cin >> N;
    }
    
    std::cout << "Fin du programme." << std::endl;
    
    return 0;
}
