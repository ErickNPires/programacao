#include <iostream>
using namespace std;

int main () {
     float salario;
     float aumento;

     cout << "Informe o salario: ";
     cin >> salario;

     cout << "Informe o valor de aumento fixo em porcentagem: ";
     cin >> aumento;

     salario = salario + ((salario * aumento) / 100);

     cout << "Novo valor do salario: " << salario << endl; 
     return 0;
}
