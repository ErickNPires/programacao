#include <iostream>
using namespace std;

int main () {
     float base;
     float altura;
     float area;

     cout << "Informe a base do retangulo: ";
     cin >> base;

     if(base <= 0) {
        cout << "A base não pode ser negativa!";
     }

     cout << "Informe a altura do retangulo: ";
     cin >> altura;

     if(altura <= 0) {
        cout << "A altura não pode ser negativa!";
     }

     if(altura > 0 && base > 0) {
          area = base * altura;
          cout << "Area do retangulo: " << area << endl; 
     }
     
      return 0;
}
