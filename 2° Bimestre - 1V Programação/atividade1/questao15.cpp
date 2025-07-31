#include <iostream>
using namespace std;

int main () {
     float peso;
     float altura;
     float imc;

     cout << "Informe o peso em kg: ";
     cin >> peso;

     cout << "Informe a altura em m: ";
     cin >> altura;

     imc = peso / (altura ** 2);
     
     cout << "Valor do IMC: " << imc << endl; 
     return 0;
}
