#include <iostream>
using namespace std;

int main () {
     int num1;
     int num2;
     int num3;
     int media;

     cout << "Informe o primeiro número: ";
     cin >> num1;

     cout << "Informe o segundo número: ";
     cin >> num2;

     cout << "Informe o terceiro número: ";
     cin >> num3;

     media = (num1 + num2 + num3) / 3;
     
     cout << "Media dos tres numeros: " << media << endl; 
     return 0;
}
