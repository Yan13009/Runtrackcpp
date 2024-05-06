#include <iostream>

int main() {
    double prixHTParKilo, quantite, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTParKilo;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> quantite;

    // Demander à l'utilisateur de saisir le taux de TVA
    std::cout << "Entrez le taux de TVA (en pourcentage) : ";
    std::cin >> tauxTVA;

    // Calculer le prix TTC
    double prixHTTotal = prixHTParKilo * quantite;
    double TVA = prixHTTotal * (tauxTVA / 100);
    double prixTTC = prixHTTotal + TVA;

    // Afficher le prix TTC des carottes
    std::cout << "Le prix TTC des carottes est : " << prixTTC << " euros." << std::endl;

    return 0;
}
