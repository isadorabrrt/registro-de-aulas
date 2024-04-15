#include <iostream>

using namespace std;

int main() {
    // Definindo as matrizes 2x3 A e B
    int matrizA[2][3], matrizB[2][3], matrizSoma[2][3];

    // Solicitando e armazenando os valores da matriz A
    cout << "Digite seis valores inteiros para preencher a matriz A (2x3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j << "] da matriz A: ";
            cin >> matrizA[i][j];
        }
    }

    // Solicitando e armazenando os valores da matriz B
    cout << "\nDigite seis valores inteiros para preencher a matriz B (2x3):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j << "] da matriz B: ";
            cin >> matrizB[i][j];
        }
    }

    // Calculando a soma das matrizes A e B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    // Exibindo a matriz soma
    cout << "\nA soma das matrizes A e B é:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrizSoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
