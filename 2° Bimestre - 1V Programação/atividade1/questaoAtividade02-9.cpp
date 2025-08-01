#include <iostream>
using namespace std;

int main() {
    double tempoHoras;
    double velocidadeMedia;
    double distancia;
    double tempoMinutos;

    cout << "Digite o tempo gasto na viagem (em horas): ";
    cin >> tempoHoras;

    if(tempoHoras <= 0) {
       cout << "O tempo precisa ser maior que 0 horas!";
    }
     
    cout << "Digite a velocidade media do veiculo (em km/h): ";
    cin >> velocidadeMedia;

    if(velocidadeMedia <= 0) {
       cout << "A velocidade media precisa ser maior que 0!";
    }

    if(tempoHoras > 0 && velocidadeMedia > 0) {
       distancia = velocidadeMedia * tempoHoras;
       tempoMinutos = tempoHoras * 60;

       cout << "\nDistancia total percorrida: " << distancia << " km" << endl;
       cout << "Tempo total em minutos: " << tempoMinutos << " minutos" << endl;
    }
    return 0;
}
