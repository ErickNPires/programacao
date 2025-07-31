#include <iostream>
using namespace std;

int main () {
     float base;
     float altura;
     float area;

     cout << "Informe a base do retangulo: ";
     cin >> base;

     if(base < 0) {
        cout << "O Valor não pode ser negativo!"
     }

     cout << "Informe a altura do retangulo: ";
     cin >> altura;

     area = base * altura;
     
     cout << "Area do retangulo: " << area << endl; 
     return 0;
}
