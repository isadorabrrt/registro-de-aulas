#include <iostream>
#include <string>

using namespace std;

int main() {
    const int NUM_ALUNOS = 5;
    const int NUM_NOTAS = 3;
    
    // Definindo a matriz 5x3 para armazenar os nomes e as notas dos alunos
    string alunos[NUM_ALUNOS];
    float notas[NUM_ALUNOS][NUM_NOTAS];
    
    // Solicitando e armazenando os nomes e notas dos alunos
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i];
        
        cout << "Digite as três notas do aluno " << alunos[i] << " (separadas por espaço): ";
        for (int j = 0; j < NUM_NOTAS; j++) {
            cin >> notas[i][j];
        }
    }
    
    // Calculando a média de cada aluno e exibindo o resultado
    cout << "\nMédias dos Alunos:" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float soma = 0;
        for (int j = 0; j < NUM_NOTAS; j++) {
            soma += notas[i][j];
        }
        float media = soma / NUM_NOTAS;
        cout << "Aluno: " << alunos[i] << ", Média: " << media << endl;
    }
    
    return 0;
}
