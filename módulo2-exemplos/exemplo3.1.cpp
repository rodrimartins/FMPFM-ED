#include <iostream>
using namespace std;

void troca(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "Entre dois numeros: ";
	cin >> a >> b;
	cout << "Voce entrou com " << a << " e " << b << endl;
	
// Troca a com b
	troca(a, b);
	cout << "Trocados, eles sao " << a << " e " << b << endl;
}
