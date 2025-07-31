#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float idade1;
    float idade2;
    float diferenca;

    cout << "Informe a primeira idade: ";
    cin >> idade1;

    cout << "Informe a segunda idade: ";
    cin >> idade2;

    diferenca = idade1 - idade2;

    cout << "Diferenca entre as idades: " << diferenca << endl; 
    return 0;
}
