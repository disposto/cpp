#include <iostream>
using namespace std;

int main() {

    int vidas = 5;           // N�meros inteiros
    char letra = 'J';        // Apenas 1 caractere
    char letras[20] = "ABC"; // Inicializando para n�o imprimir lixo
    double decimal = 5.1;    // N�meros decimais precisos
    float decimal2 = 5.3;    // N�meros decimais menos precisos
    bool verdadeirooufalso = false; // true ou false
    string nome = "Ol�";     // Texto completo

    cout << vidas << "\n";
    cout << decimal2 << "\n";
    cout << letras << "\n";
    cout << decimal << "\n";
    cout << verdadeirooufalso << "\n"; // 0 = false, 1 = true
    cout << nome << "\n";

    return 0;
}
