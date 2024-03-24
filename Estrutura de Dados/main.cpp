/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    /*
    float celsius;
    
    cout<<"FAÇO PROGRAMA DE NOITE!\n";
    cout<<"Digite um valor em celsius: ";
    cin >> celsius ;
    
    float fahrenhei = (celsius * 1.8) + 32;
    
    cout <<"O resultado do seu programa lindo deu: \n" << fahrenhei;
    return 0;
    
    int valor1 = 10;
    int valor2 = 5;
    if(valor1 > 5 && valor2 < 10) {
        cout << "Verdadeiro" <<endl;
    }
    */
    float peso;
    float altura;
    float imc;
    
    cout<<"Digite seu peso em TONELADAS: ";
    cin >> peso;
    
    cout<<"Digite sua altura em METROS: ";
    cin >> altura;
    
    imc = peso / (altura * altura);
    
    cout <<"O valor do seu IMC é : \n" << imc;
}
