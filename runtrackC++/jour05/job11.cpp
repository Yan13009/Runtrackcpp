#include <iostream>

class Operation {
private:
    double valeur;

public:
    // Constructeur prenant une valeur initiale
    Operation(double valeur_) : valeur(valeur_) {}

    // Surcharge de l'opérateur d'addition
    Operation operator+(const Operation& autre) const {
        return Operation(valeur + autre.valeur);
    }

    // Surcharge de l'opérateur de soustraction
    Operation operator-(const Operation& autre) const {
        return Operation(valeur - autre.valeur);
    }

    // Surcharge de l'opérateur de multiplication
    Operation operator*(const Operation& autre) const {
        return Operation(valeur * autre.valeur);
    }

    // Surcharge de l'opérateur de division
    Operation operator/(const Operation& autre) const {
        if (autre.valeur != 0) {
            return Operation(valeur / autre.valeur);
        } else {
            std::cerr << "Erreur : division par zéro" << std::endl;
            return Operation(0);
        }
    }

    // Méthode pour afficher la valeur de l'opération
    void afficher() const {
        std::cout << "Valeur : " << valeur << std::endl;
    }
};

int main() {
    // Création d'objets Operation
    Operation op1(5);
    Operation op2(3);

    // Opérations mathématiques sur les objets Operation
    Operation resultatAddition = op1 + op2;
    Operation resultatSoustraction = op1 - op2;
    Operation resultatMultiplication = op1 * op2;
    Operation resultatDivision = op1 / op2;

    // Affichage des résultats
    std::cout << "Addition : ";
    resultatAddition.afficher();
    std::cout << "Soustraction : ";
    resultatSoustraction.afficher();
    std::cout << "Multiplication : ";
    resultatMultiplication.afficher();
    std::cout << "Division : ";
    resultatDivision.afficher();

    return 0;
}
