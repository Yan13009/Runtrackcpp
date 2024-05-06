#include <iostream>

int main() {
    int i = 0, n, somme = 0;

    while (i < 4) {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        somme += n;
        i++;
    }

    std::cout << "Somme : " << somme << std::endl;

    return 0;
}
"do- WHILE "
#include <iostream>

int main() {
    int i = 0, n, somme = 0;

    do {
        std::cout << "Donnez un entier : ";
        std::cin >> n;
        somme += n;
        i++;
    } while (i < 4);

    std::cout << "Somme : " << somme << std::endl;

    return 0;
}
