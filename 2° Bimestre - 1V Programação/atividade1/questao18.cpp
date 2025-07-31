#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float distancia;
    float gastos;
    float consumo;

    cout << "Informe a distancia percorrida em km: ";
    cin >> distancia;

    cout << "Informe a distancia percorrida em km: ";
    cin >> gastos;

    consumo = distancia / gastos;

    cout << "Media de consumo: " << consumo << endl; 
    return 0;
}
