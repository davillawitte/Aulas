#include <iostream>
#include <string>

using namespace std;

int main(){

    //string frase1 = "bola";
    //string frase2 = "bolas";
    string frase;
    cout << "Entre com uma frase: ";
    getline(cin, frase);
    cout << "Tamanho da string eh:" << frase.size() << endl; // Tamanho da string
    cout << frase.erase(10, 5) << endl; // Apaga 5 caracteres a partir do caractere 10
    cout << frase.insert(10, "5, blaba") << endl; // Inserindo frase
    cout << "Nessa string ainda cabem " << frase.capacity() << " caracteres" << endl;
    

    return 0;

}