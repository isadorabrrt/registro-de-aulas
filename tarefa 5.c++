#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;

    // Solicitando o número de linhas (n) e colunas (m) da matriz
    cout << "Digite o número de linhas da matriz: ";
    cin >> n;
    cout << "Digite o número de colunas da matriz: ";
    cin >> m;

    // Definindo as matrizes A e B com base nos valores de n e m
    vector<vector<int>> A(n, vector<int>(m));
    vector<vector<int>> B(n, vector<int>(m));

    // Solicitando e armazenando os elementos da matriz A
    cout << "\nDigite os elementos da matriz A (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Digite o elemento da posição [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    // Preenchendo a matriz B com os elementos de A multiplicados por 3
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[i][j] * 3;
        }
    }

    // Exibindo o conteúdo das matrizes A e B
    cout << "\nConteúdo da matriz A:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nConteúdo da matriz B (elementos de A multiplicados por 3):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
