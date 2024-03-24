#include <iostream>
using namespace std;

int main() {
    cout <<"***DEUS ME AJUDE!***"<<endl;
    int vetor[9] = {2, 3, 7, 9, 26, 5, 144, 0, 1};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    for (int i = 0; i < tamanho_vetor - 1; i++) {
        int min = i;
        
        for (int j = i + 1; j < tamanho_vetor; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        
        int temp = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = temp;
    }
    
    cout << "SELECTION SORT: ";
    for (int i = 0; i < tamanho_vetor; i++) {
        cout << vetor[i];
    }
    
    return 0;
}
