#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    int age;
    int matricule;

public:
    // Constructeur avec liste d'initialisation
    Etudiant(const std::string& nom_, const std::string& prenom_, int age_, int matricule_)
        : nom(nom_), prenom(prenom_), age(age_), matricule(matricule_) {}

    // Méthodes pour accéder aux informations de l'étudiant
    const std::string& getNom() const { return nom; }
    const std::string& getPrenom() const { return prenom; }
    int getAge() const { return age; }
    int getMatricule() const { return matricule; }

    // Méthodes pour manipuler les attributs en utilisant "this"
    void setNom(const std::string& nom) { this->nom = nom; }
    void setPrenom(const std::string& prenom) { this->prenom = prenom; }
    void setAge(int age) { this->age = age; }
    void setMatricule(int matricule) { this->matricule = matricule; }
};

#endif // ETUDIANT_HPP
