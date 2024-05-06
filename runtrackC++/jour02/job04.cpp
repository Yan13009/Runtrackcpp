#include <iostream>

int main() {
    char operation;
    double num1, num2, resultat;

    // Demande à l'utilisateur d'entrer l'opération
    std::cout << "Entrez l'opération (+, -, *, /) : ";
    std::cin >> operation;

    // Demande à l'utilisateur d'entrer les deux nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> num1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> num2;

    // Effectue l'opération appropriée et affiche le résultat
    switch(operation) {
        case '+':
            resultat = num1 + num2;
            std::cout << "Résultat : " << resultat;
            break;
        case '-':
            resultat = num1 - num2;
            std::cout << "Résultat : " << resultat;
            break;
        case '*':
            resultat = num1 * num2;
            std::cout << "Résultat : " << resultat;
            break;
        case '/':
            if(num2 != 0) {
                resultat = num1 / num2;
                std::cout << "Résultat : " << resultat;
            } else {
                std::cout << "Erreur : division par zéro !";
            }
            break;
        default:
            std::cout << "Opération invalide !";
    }

    return 0;
}
