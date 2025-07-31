#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float valor;
    float desconto;
    float valorFinal;

    cout << "Informe o valor do produto: ";
    cin >> valor;

    cout << "Informe a porcentagem de desconto: ";
    cin >> desconto;

    valorFinal = valor - ((valor * desconto) / 100);

    cout << "Valor do produto com o desconto: " << valorFinal << endl; 
    return 0;
}
