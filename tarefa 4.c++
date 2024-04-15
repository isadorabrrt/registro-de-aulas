#include <iostream>

using namespace std;

int main() {
    const int LINHAS = 4;
    const int COLUNAS = 2;

    // Definindo a matriz A 4x2 para armazenar os números reais
    float matrizA[LINHAS][COLUNAS];

    // Solicitando e armazenando os números reais na matriz A
    cout << "Digite oito números reais para preencher a matriz A (4x2):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << "Digite o valor para a posição [" << i << "][" << j << "] da matriz A: ";
            cin >> matrizA[i][j];
        }
    }

    // Definindo a matriz B do mesmo tamanho que A
    float matrizB[LINHAS][COLUNAS];

    // Preenchendo a matriz B com os elementos de A de forma invertida
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizB[i][j] = matrizA[LINHAS - 1 - i][COLUNAS - 1 - j];
        }
    }

    // Exibindo o conteúdo de A
    cout << "\nConteúdo da matriz A:" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << matrizA[i][j] << " ";
        }
        cout << endl;
    }

    // Exibindo o conteúdo de B
    cout << "\nConteúdo da matriz B (com os elementos invertidos de A):" << endl;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
