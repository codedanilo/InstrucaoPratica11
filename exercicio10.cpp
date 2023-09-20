/*
Exercício 10:
Escreva uma função que recebe uma string de caracteres e uma letra e devolve um
vetor de inteiros contendo as posições (índices no vetor da string) onde a letra foi
encontrada) e um inteiro contendo o tamanho do vetor criado (total de letras iguais
encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
para guardar o tamanho do vetor.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int>* encontra_letras(const string& str, char letra, int* tamanho) {
    vector<int>* posicoes = new vector<int>;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == letra) {
            posicoes->push_back(i);
        }
    }

    *tamanho = posicoes->size(); // Define o tamanho do vetor

    return posicoes;
}

int main() {
    string texto;
    char letra;

    cout << "Digite uma palavra: ";
    cin >> texto;

    cout << "Digite a letra a ser encontrada: ";
    cin >> letra;

    int tamanho;
    vector<int>* posicoes = encontra_letras(texto, letra, &tamanho);

    if (tamanho > 0) {
        cout << "Posições onde a letra '" << letra << "' foi encontrada:" << endl;
        for (int i = 0; i < tamanho; i++) {
            cout << (*posicoes)[i] << " ";
        }
        cout << endl;
    } else {
        cout << "A letra '" << letra << "' não foi encontrada na string." << endl;
    }

    delete posicoes; // Libere a memória alocada dinamicamente para o vetor

    return 0;
}
