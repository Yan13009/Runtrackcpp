#include <iostream>
#include <string>

// Classe abstraite Animal
class Animal {
public:
    // Méthodes virtuelles pures
    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

// Classe Chien héritant de Animal
class Chien : public Animal {
public:
    // Implémentation de la méthode crier pour Chien
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    // Implémentation de la méthode manger pour Chien
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

// Classe Chat héritant de Animal
class Chat : public Animal {
public:
    // Implémentation de la méthode crier pour Chat
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Implémentation de la méthode manger pour Chat
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

int main() {
    // Instanciation d'un objet Chien
    Chien chien;
    std::cout << "Le chien crie : ";
    chien.crier();
    std::cout << "Le chien mange : ";
    chien.manger();
    std::cout << std::endl;

    // Instanciation d'un objet Chat
    Chat chat;
    std::cout << "Le chat crie : ";
    chat.crier();
    std::cout << "Le chat mange : ";
    chat.manger();
    std::cout << std::endl;

    return 0;
}
