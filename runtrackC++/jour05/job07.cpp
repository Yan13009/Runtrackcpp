#include <iostream>
#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur prenant un nom et un numéro de téléphone
    Contact(const std::string& nom_, int numero_)
        : nom(nom_), numero(numero_) {}

    // Constructeur de copie
    Contact(const Contact& autreContact)
        : nom(autreContact.nom), numero(autreContact.numero) {}

    // Méthode pour afficher les informations du contact
    void afficherInfos() const {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Numéro de téléphone : " << numero << std::endl;
    }

    // Méthode pour modifier le numéro de téléphone
    void modifierNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }
};

int main() {
    // Création de plusieurs objets Contact avec des données différentes
    Contact contact1("Alice", 123456789);
    Contact contact2("Bob", 987654321);

    // Affichage des informations des contacts originaux
    std::cout << "Informations des contacts originaux :" << std::endl;
    contact1.afficherInfos();
    std::cout << std::endl;
    contact2.afficherInfos();
    std::cout << std::endl;

    // Création de copies des contacts originaux
    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;

    // Modification du numéro de téléphone des copies
    copieContact1.modifierNumero(999999999);
    copieContact2.modifierNumero(111111111);

    // Affichage des informations des copies
    std::cout << "Informations des copies des contacts :" << std::endl;
    copieContact1.afficherInfos();
    std::cout << std::endl;
    copieContact2.afficherInfos();
    std::cout << std::endl;

    return 0;
}
