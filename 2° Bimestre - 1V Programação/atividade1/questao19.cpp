#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float valor;
    float pessoas;
    float valores;

    cout << "Informe o valor total da conta: ";
    cin >> valor;

    cout << "Informe o numero de pessoas para repartir a conta: ";
    cin >> pessoas;

    valores = valor / pessoas;

    cout << "Cada uma deve pagar: " << valores << endl; 
    return 0;
}
