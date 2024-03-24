#include <iostream>
using namespace std;

int main() {
	int vetor[10] = {9, 5, 11, 7, 8, 3, 6, 4, 45, 566};
	int a;
	for(int i = 0; i < 9; i++) {
		for(int j = i + 1; j > 0; j --) {
			if(vetor[j] < vetor[j - 1]) {
				a = vetor[j];
				vetor[j] = vetor[j - 1];
				vetor[j - 1] = a;
			}
			else
				break;
		}
	}
	for(int i = 0; i < 10; i++)
		cout << vetor[i] << " | ";
	cout << endl;
	return 0;
}
