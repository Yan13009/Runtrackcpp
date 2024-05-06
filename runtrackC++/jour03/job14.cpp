#include <iostream>
#include <string>
#include <vector>

bool estPalindrome(const std::string& mot) {
    int debut = 0;
    int fin = mot.length() - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};

    std::cout << "Palindromes trouves dans le tableau :" << std::endl;
    for (const std::string& mot : tab) {
        if (estPalindrome(mot)) {
            std::cout << mot << std::endl;
        }
    }

    return 0;
}
