#include <iostream>
using namespace std;

int main() {
    cout <<"***DEUS ME AJUDE!***"<<endl;
    int vetor[10] = {5, 3, 4, 8, 126, 12, 21, 0, 4, 1};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]); // tamanho do vetor
    
    for (int i = 0; i < tamanho_vetor - 1; i++) {
        for (int j = 0; j < tamanho_vetor - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int t = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = t;
            }
        }
    }
    
    cout << "Vetor doido: ";
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << vetor[i];
    }
    
    return 0;
}
