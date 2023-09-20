/*
Exercício 6:
Faça uma função que receba dois vetores de números inteiros e os seus
respectivos tamanhos por parâmetro e retorne um vetor com os valores dos dois
vetores intercalados. Depois faça o programa principal para testar a sua função.
Protótipo da função: int* intercala(int *vet1, int tam1, int *vet2, int tam2);
*/

#include <iostream>

using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int *resultado = new int[tam1 + tam2]; // Aloca um novo vetor para armazenar o resultado
    int index1 = 0, index2 = 0;

    for (int i = 0; i < tam1 + tam2; i++) {
        if (index1 < tam1) {
            resultado[i] = vet1[index1];
            index1++;
        } else {
            resultado[i] = vet2[index2];
            index2++;
        }
    }

    return resultado;
}

int main() {
    int vet1[] = {1, 3, 5};
    int tam1 = 3;

    int vet2[] = {2, 4, 6};
    int tam2 = 3;

    int *resultado = intercala(vet1, tam1, vet2, tam2);

    int tamResultado = tam1 + tam2;

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tamResultado; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado; // Não se esqueça de liberar a memória alocada dinamicamente

    return 0;
}
