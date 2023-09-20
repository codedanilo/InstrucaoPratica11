/*
Exercício 4:
Escreva uma função calcula que:
a. receba como parâmetros duas variáveis inteiras, X e Y;
b. retorne em X a soma de X e Y;
c. retorne em Y a subtração de X e Y.
*/


#include <iostream>

using namespace std;

void calcularSomaSub(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    
    X = soma;
    Y = subtracao;
}

int main() {
    int X, Y;

    cout << "Digite o valor de X: ";
    cin >> X;

    cout << "Digite o valor de Y: ";
    cin >> Y;

    calcularSomaSub(X, Y);

    cout << "A soma de X e Y é: " << X << endl;
    cout << "A subtração de X e Y é: " << Y << endl;

    return 0;
}
