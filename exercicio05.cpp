/*
Exercício 5:
Faça uma função “insere_meio(int vet[ ], int tam)” que insere um elemento no meio
de um vetor de números inteiros. Depois faça o programa principal para testar a sua
função.
Por exemplo:
Sendo o vetor = {1,2,3,4,5,6} e qtde = 6, ao usar
insere_meio(vetor, qtde, 100),
será retornado o novo valor de qtde, que passou a ser 7, e o vetor, ao término
da função, passará a ficar da seguinte forma: vetor= {1,2,3,100,4,5,6}.
Protótipo da função: int insere_meio( int *vetor, int qtde, int elemento);
*/


#include <iostream>

using namespace std;

int insere_meio(int vetor[], int &qtde, int elemento) {
    if (qtde % 2 == 0) {
        // Se o tamanho do vetor for par, deslocamos os elementos à direita para abrir espaço
        for (int i = qtde - 1; i >= qtde / 2; i--) {
            vetor[i + 1] = vetor[i];
        }
    } else {
        // Se o tamanho do vetor for ímpar, deslocamos os elementos à direita para abrir espaço
        for (int i = qtde - 1; i > qtde / 2; i--) {
            vetor[i + 1] = vetor[i];
        }
    }

    vetor[qtde / 2] = elemento; // Insere o elemento no meio
    qtde++; // Incrementa a quantidade de elementos no vetor

    return qtde;
}

int main() {
    int vetor[100]; // Tamanho máximo do vetor (ajuste conforme necessário)
    int qtde = 6;   // Tamanho inicial do vetor

    // Inicialize o vetor com valores
    for (int i = 0; i < qtde; i++) {
        vetor[i] = i + 1;
    }

    int elemento = 100;
    int novaQtde = insere_meio(vetor, qtde, elemento);

    cout << "Novo valor de qtde: " << novaQtde << endl;
    cout << "Vetor após a inserção: ";
    
    for (int i = 0; i < novaQtde; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;

    return 0;
}
