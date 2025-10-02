#include <iostream>
using namespace std;

int main()
{
    int idade;
    cout << "Insira a sua idade." << endl;
    cin >> idade;
    
    cout << (idade >= 16 ? "Você já pode votar." : "Você não pode votar.") << endl;
    return 0;
}
