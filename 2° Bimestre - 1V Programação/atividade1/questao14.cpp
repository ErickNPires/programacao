#include <iostream>
using namespace std;

int main () {
     float valor;
     float pago;
     float troco;

     cout << "Informe o valor da compra: ";
     cin >> valor;

     cout << "Informe o valor que foi pago: ";
     cin >> pago;

     troco = valor - pago;
     
     cout << "Valor do troco: " << troco << endl; 
     return 0;
}
