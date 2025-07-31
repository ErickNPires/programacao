#include <iostream>
using namespace std;

int main() {
    double tempoHoras;
    double velocidadeMedia;
    double distancia;
    double tempoMinutos;

    cout << "Digite o tempo gasto na viagem (em horas): ";
    cin >> tempoHoras;

    cout << "Digite a velocidade media do veiculo (em km/h): ";
    cin >> velocidadeMedia;

    distancia = velocidadeMedia * tempoHoras;
    tempoMinutos = tempoHoras * 60;

    cout << "\nDistancia total percorrida: " << distancia << " km" << endl;
    cout << "Tempo total em minutos: " << tempoMinutos << " minutos" << endl;

    return 0;
}
