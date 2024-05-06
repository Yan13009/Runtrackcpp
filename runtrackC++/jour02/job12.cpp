#include <iostream>

int main() {
    int n = 10;

    double somme = 0.0;
    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }
    std::cout << "La somme des " << n << " premiers termes de la série harmonique est : " << somme << std::endl;

    return 0;
}
