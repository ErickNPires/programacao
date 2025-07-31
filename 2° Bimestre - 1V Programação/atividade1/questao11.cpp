#include <iostream>
using namespace std;

int main () {
     float minutos;
     float segundos;

     cout << "Informe uma quantidade de minutos: ";
     cin >> minutos;

     segundos = minutos * 60;

     cout << "Quantidade de segundos: " << segundos << endl; 
     return 0;
}
