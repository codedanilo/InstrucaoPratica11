/*
Faça uma função que receba (por referência) 4 variáveis float e ordena (crescente) os
valores destas variáveis. Depois faça o programa principal para testar a sua função.
*/


#include <iostream>

void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (a > d) {
        std::swap(a, d);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (b > d) {
        std::swap(b, d);
    }
    if (c > d) {
        std::swap(c, d);
    }
}

int main() {
    float num1, num2, num3, num4;

    std::cout << "Digite quatro números float: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    ordenar(num1, num2, num3, num4);

    std::cout << "Números em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}
