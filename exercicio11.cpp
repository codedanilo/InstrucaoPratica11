/*
Exercício 11:
Escreva uma função que codifica uma string em um código secreto. A regra secreta
de codificação é extremamente simples: substitui cada letra pela letra seguinte 
(Z é codificado como A). Por exemplo, “Estruturas de Dados” se transformaria em
“Ftusvuvsbt ef Ebept”. Escreva uma função para codificar e uma para decodificar 
cadeias segundo este código. Suas funções devem escrever a string produzida em
uma string diferente da fornecida como entrada.*/

#include <iostream>
#include <string>

using namespace std;

string codificar(const string& texto) {
    string resultado = texto;

    for (char& c : resultado) {
        if (isalpha(c)) {
            if (c == 'Z') {
                c = 'A'; // Substitui Z por A
            } else if (c == 'z') {
                c = 'a'; // Substitui z por a
            } else {
                c++; // Substitui as outras letras pela próxima no alfabeto
            }
        }
    }

    return resultado;
}

string decodificar(const string& texto) {
    string resultado = texto;

    for (char& c : resultado) {
        if (isalpha(c)) {
            if (c == 'A') {
                c = 'Z'; // Substitui A por Z
            } else if (c == 'a') {
                c = 'z'; // Substitui a por z
            } else {
                c--; // Substitui as outras letras pela anterior no alfabeto
            }
        }
    }

    return resultado;
}

int main() {
    string texto = "Estruturas de Dados";

    string texto_codificado = codificar(texto);
    string texto_decodificado = decodificar(texto_codificado);

    cout << "Texto original: " << texto << endl;
    cout << "Texto codificado: " << texto_codificado << endl;
    cout << "Texto decodificado: " << texto_decodificado << endl;

    return 0;
}
