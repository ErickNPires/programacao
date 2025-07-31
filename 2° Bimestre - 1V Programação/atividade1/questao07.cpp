#include <iostream>
using namespace std;

int main () {
     float comprimento;
     float largura;
     float altura;
     float volume;

     cout << "Informe o comprimento da caixa: ";
     cin >> comprimento;

     cout << "Informe a largura da caixa: ";
     cin >> largura;

     cout << "Informe a altura da caixa: ";
     cin >> altura;
  
     volume = comprimento * largura * altura;
     
     cout << "Volume da caixa: " << volume << endl; 
     return 0;
}
