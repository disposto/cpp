#include <iostream>
using namespace std;

int main() {
    int saldo = 1150; // saldo inicial
    cout << "Seu salário foi enviado para o banco! (R$" << saldo << ")" << endl;
    cout << "Você deseja depositar dinheiro? [s/n]" << endl;

    char resposta; 
    cout << "Depositar dinheiro: ";
    cin >> resposta;

    if (resposta == 's' || resposta == 'S') {
        int deposito;
        cout << "Quanto deseja depositar? R$";
        cin >> deposito;

        if (deposito > 0) {
            saldo += deposito; // atualiza o saldo
            cout << "Você depositou R$" << deposito 
                 << " e agora seu saldo é R$" << saldo << "!" << endl;
        } else {
            cout << "Valor inválido para depósito!" << endl;
        }
    } else if (resposta == 'n' || resposta == 'N') {
        cout << "Depósito cancelado! Seu saldo continua R$" << saldo << endl;
    } else {
        cout << "Resposta inválida!" << endl;
    }

    cin.ignore();
    cin.get(); // pausa antes de fechar
    return 0;
}
