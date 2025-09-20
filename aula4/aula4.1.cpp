#include <iostream>
using namespace std;

int main() {

    int vidas = 5;           // Números inteiros
    char letra = 'J';        // Apenas 1 caractere
    char letras[20] = "ABC"; // Inicializando para não imprimir lixo
    double decimal = 5.1;    // Números decimais precisos
    float decimal2 = 5.3;    // Números decimais menos precisos
    bool verdadeirooufalso = false; // true ou false
    string nome = "Olá";     // Texto completo

    cout << vidas << "\n";
    cout << decimal2 << "\n";
    cout << letras << "\n";
    cout << decimal << "\n";
    cout << verdadeirooufalso << "\n"; // 0 = false, 1 = true
    cout << nome << "\n";

    return 0;
}
