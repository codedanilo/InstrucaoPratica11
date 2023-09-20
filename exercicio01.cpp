/*
Exercício 1:
Escreva uma função chamada maxmin que receba um vetor de números inteiros
chamado vetor, uma variável inteira n contendo o tamanho do vetor, e os endereços
de duas variáveis inteiras, maximo e minimo nas quais será retornado o valor do
elemento de maior valor e o valor do elemento de menor valor.
Protótipo da Função:
void maxmin(int vetor[], int n, int &maximo, int &minimo);
Escreva também uma função principal (main) que use a função maxmin.
*/

#include <iostream>

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        std::cerr << "O vetor está vazio!" << std::endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;

    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Tamanho de vetor inválido!" << std::endl;
        return 1;
    }

    int vetor[n];
    int maximo, minimo;

    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << i+1 << ": ";
        std::cin >> vetor[i];
    }

    maxmin(vetor, n, maximo, minimo);

    std::cout << "O maior elemento do vetor: " << maximo << std::endl;
    std::cout << "O menor elemento do vetor: " << minimo << std::endl;

    return 0;
}
