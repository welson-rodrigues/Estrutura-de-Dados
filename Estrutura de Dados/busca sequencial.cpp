/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int busca[] = {5, 4, 10, 2, 25, 13, 0, 7};
    int n = 8;
    int valor = 0;
    
    for(int i = 0; i < n; i++) {
        if(busca[i] == valor) {
            cout << "Valor encontrado: " << i <<endl;
            return 0;
        }
    }
    cout<<"Valor não encontrado: "<<endl;
    return 0;
}
