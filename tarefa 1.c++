#include <iostream>

using namespace std;

int main() {
    // Definindo uma matriz 3x3 para armazenar os valores
    int matriz[3][3];

    // Solicitando e armazenando os valores na matriz
    cout << "Digite nove valores inteiros para preencher a matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Exibindo os elementos da matriz na ordem inversa
    cout << "\nOs elementos da matriz na ordem inversa são:" << endl;
    for (int i = 2; i >= 0; i--) {
        for (int j = 2; j >= 0; j--) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
