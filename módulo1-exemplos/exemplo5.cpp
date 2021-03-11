#include <iostream> /* inclui diretivas de entrada-saída */
using namespace std;

int main( )
{
    int idade;
    idade = 17;
    cout << "Pode tirar carteira de motorista? " << (idade >= 18) << endl;
    idade = 35;
    cout << "Pode tirar carteira de motorista? " << (idade >= 18) << endl;
}

