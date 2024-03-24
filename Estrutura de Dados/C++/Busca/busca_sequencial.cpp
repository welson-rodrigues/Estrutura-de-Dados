#include <iostream>
using namespace std;

int main() {
	cout <<"***BUSCA SEQUENCIAL***"<<endl;
    int vetor[] = {31, 16, 45, 87, 37, 99, 21, 43, 10, 48};
    int valorProcurado = 87;
    int indice = -1;
    for (int i = 0; i < sizeof(vetor)/sizeof(vetor[0]); i++) {
        if (vetor[i] == valorProcurado) {
            indice = i;
            break;
        }
    }
    if (indice != -1)
        cout << "O valor " << valorProcurado << " foi encontrado no índice " << indice << endl;
    else
        cout << "O valor " << valorProcurado << " nao foi encontrado." << endl;
    return 0;
}

