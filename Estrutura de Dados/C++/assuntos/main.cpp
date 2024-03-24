#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int busca[] = {5, 4, 10, 2, 25, 13, 0, 7};
	int n = 8;
	int valor = 0;
	
	for(int i = 0; i < n; i++) {
		if(busca[i] == valor) {
			cout <<"Valor encontrado: "<< i <<endl;
			return 0;
		}
	}
	cout<<"Valor não encontrado: "<<endl;
	return 0;
}
