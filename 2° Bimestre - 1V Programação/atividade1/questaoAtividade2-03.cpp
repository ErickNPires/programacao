#include <iostream>
using namespace std;

int main () {
     float nota1;
     float peso1;
     float nota2;
     float peso2;
     float nota3;
     float peso3;
     float media;

     cout << "Informe a primeira nota: ";
     cin >> nota1;

     cout << "Informe o peso da primeira nota: ";
     cin >> peso1;

     cout << "Informe a segunda nota: ";
     cin >> nota2;

     cout << "Informe o peso da segunda nota: ";
     cin >> peso2;

     cout << "Informe a terceira nota: ";
     cin >> nota3;

     cout << "Informe o peso da terceira nota: ";
     cin >> peso3;

     if(peso1 + peso2 + peso3 == 0) {
          cout << "A media nao pode ser calculada porque a soma dos pesos eh igual a 0!";
     } else {
         media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
     
         cout << "Media ponderada das 3 notas: " << media << endl; 
     }
     return 0;
}
