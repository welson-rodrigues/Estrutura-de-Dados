#include <iostream>
using namespace std;

int main() {
    int vetor[10] = {10, 16, 21, 31, 37, 43, 45, 48, 87, 99};
    int x = 43; // valor que quero encontrar
    int inicio = 0;
    int fim = sizeof(vetor) / sizeof(vetor[0]) - 1; // o fim será o tamamho do vetor - 1
    int meio;
    
    do {
        meio = inicio + (fim - inicio) / 2;
        if (x < vetor[meio]) {
            fim = meio - 1;
        }
        else if (x > vetor[meio]) {
            inicio = meio + 1;
        }
        else {
            cout << "O valor " << x << " foi encontrado no índice " << meio << "." << endl;
            return meio; // Retorna o índice se o valor for encontrado, caso não seja maior e nem menor
        }
    } while (inicio <= fim); // se nada disso acontecer o programa continua rodando enquando o inicio for <= ao fom

    cout << "O valor " << x << " não foi encontrado no vetor." << endl;
    return 0;
}

