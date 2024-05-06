#include <iostream>
#include <string>

class Animal {
private:
    static int totalAnimaux;

public:
    Animal() {
        totalAnimaux++;
    }

    virtual ~Animal() {
        totalAnimaux--;
    }

    static int getTotalAnimaux() {
        return totalAnimaux;
    }

    virtual void crier() const = 0;
    virtual void manger() const = 0;
};

int Animal::totalAnimaux = 0;

class Chien : public Animal {
public:
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

class Chat : public Animal {
public:
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

int main() {
    Chien chien1, chien2;
    Chat chat1, chat2, chat3;

    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    return 0;
}
