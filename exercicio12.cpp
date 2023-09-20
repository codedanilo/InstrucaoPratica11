/*
Exercício 12:
Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string intersecao_strings(const string& A, const string& B) {
    string C;
    
    for (char c : A) {
        if (B.find(c) != string::npos && C.find(c) == string::npos) {
            C.push_back(c);
        }
    }

    return C;
}

int main() {
    string A = "";
    string B = "";

    cout << "Digite a primeira palavra: ";
    cin >> A;

    cout << "Digite a segunda palavra: ";
    cin >> B;

    string C = intersecao_strings(A, B);

    cout << "String A: " << A << endl;
    cout << "String B: " << B << endl;
    cout << "Interseção (String C): " << C << endl;

    return 0;
}
