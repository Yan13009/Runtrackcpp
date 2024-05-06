#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(const std::string& nom_, int pointsDeVie_, float defense_)
        : nom(nom_), pointsDeVie(pointsDeVie_), defense(defense_) {}

    // Méthodes pour accéder aux informations de la personne
    const std::string& getNom() const { return nom; }
    int getPointsDeVie() const { return pointsDeVie; }
    float getDefense() const { return defense; }

    // Méthodes pour modifier les informations de la personne
    void setNom(const std::string& nouveauNom) { nom = nouveauNom; }
    void setPointsDeVie(int nouveauxPointsDeVie) { pointsDeVie = nouveauxPointsDeVie; }
    void setDefense(float nouvelleDefense) { defense = nouvelleDefense; }

    // Méthode pour afficher les informations de la personne
    void afficherInfos() const {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Points de vie : " << pointsDeVie << std::endl;
        std::cout << "Défense : " << defense << std::endl;
    }
};

int main() {
    // Création de différentes instances de Personne avec des valeurs initiales différentes
    Personne personne1("Alice", 100, 0.5f);
    Personne personne2("Bob", 150, 0.6f);

    // Affichage des informations initiales des personnes
    std::cout << "Informations initiales de la personne 1 :" << std::endl;
    personne1.afficherInfos();
    std::cout << std::endl;

    std::cout << "Informations initiales de la personne 2 :" << std::endl;
    personne2.afficherInfos();
    std::cout << std::endl;

    // Modification des informations de la personne 1
    personne1.setNom("Alice Smith");
    personne1.setPointsDeVie(120);
    personne1.setDefense(0.7f);

    // Affichage des nouvelles informations de la personne 1
    std::cout << "Informations modifiées de la personne 1 :" << std::endl;
    personne1.afficherInfos();
    std::cout << std::endl;

    return 0;
}
