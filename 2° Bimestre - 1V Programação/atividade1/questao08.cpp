#include <iostream>
using namespace std;

int main () {
     float preco1;
     float preco2;
     float preco3;
     float total;

     cout << "Informe o primeiro preco: ";
     cin >> preco1;

     cout << "Informe o segundo preco: ";
     cin >> preco2;

     cout << "Informe o terceiro preco: ";
     cin >> preco3;

     total = preco1 + preco2 + preco3;

     cout << "Preco total: " << total << endl; 
     return 0;
}
