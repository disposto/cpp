#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto;

    chances = 6;
    tam = 0;
    i = 0;
    acertos = 0;

    cout << "Diga para seu amigo fechar os olhos e digite a palavra secreta: ";
    cin >> palavra;
    system("cls");

    while (palavra[i] != '\0') {
        tam++;
        i++;
    }

    for (i = 0; i < tam; i++) {
        secreta[i] = '-';
    }
    secreta[tam] = '\0'; // termina a string

    while ((chances > 0) && (acertos < tam)) {
        cout << "Chances: " << chances << endl;
        cout << "Palavra secreta: " << secreta << endl;

        cout << "Digite uma letra: ";
        cin >> letra[0];

        acerto = false;
        for (i = 0; i < tam; i++) {
            if (palavra[i] == letra[0] && secreta[i] == '-') {
                secreta[i] = palavra[i];
                acertos++;
                acerto = true;
            }
        }

        if (!acerto) {
            chances--;
        }

        system("cls");
    }

    if (acertos == tam) {
        cout << "Parabéns! Você ganhou!" << endl;
    } else {
        cout << "Que pena! Você perdeu! A palavra era: " << palavra << endl;
    }

    return 0;
}
