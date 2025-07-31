#include <iostream>
using namespace std;

int main () {
     float base;
     float altura;
     float area;

     cout << "Informe a base do triangulo: ";
     cin >> base;

     cout << "Informe a altura do triangulo: ";
     cin >> altura;

     area = (base * altura) / 2;
     
     cout << "Area do triangulo: " << area << endl; 
     return 0;
}
