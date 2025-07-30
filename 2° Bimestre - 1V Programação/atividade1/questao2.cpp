#include <iostream>
using namespace std;

int main () {
     float num1;
     float num2;
     float num3;
     float media;

     cout << "Informe o primeiro número real: ";
     cin >> num1;

     cout << "Informe o segundo número real: ";
     cin >> num2;

     cout << "Informe o terceiro número real: ";
     cin >> num3;

     media = (num1 + num2 + num3) / 3;
     
     cout << "Media dos tres numeros: " << media << endl; 
     return 0;
}
