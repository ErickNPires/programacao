#include <iostream>
using namespace std;

int main () {
     float C;
     float F;

     cout << "Informe a temperatura em Celsius: ";
     cin >> C;

     F = (9 * C + 160) / 5;
     
     cout << "Temperatura: " << F << "°F" << endl; 
     return 0;
}
