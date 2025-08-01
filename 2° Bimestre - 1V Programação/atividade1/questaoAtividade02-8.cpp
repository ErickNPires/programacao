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

     if(preco1 < 0 || preco2 < 0 || preco3 < 0) {
       cout << "Nenhum dos preços podem ser negativos!";
     } else {
     cout << "Preco total: " << total << endl; 
     }
     return 0;
}
