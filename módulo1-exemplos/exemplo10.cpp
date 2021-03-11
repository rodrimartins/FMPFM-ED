#include <iostream>
#include <iomanip>
// necessario para usar setw() e setf() em cout

using namespace std;
int main()
{
	float n1, n2, n3, soma;
	cout << "Digite o numero 1 ";
	cin >> n1;
	cout << "Digite o numero 2 ";
	cin >> n2;
	cout << "Digite o numero 3 ";
	cin >> n3;

	soma = n1 + n2 + n3;

	cout << "Soma = " << soma << endl;
	cout.setf (ios::fixed | ios::showpoint); // reais em ponto fixo
	cout.precision(2); // 2 casa decimais
	//setw(8) fixa tamanho da representação em 8 digitos
	cout << "Media = " << setw(8) << soma / 3.0 << endl;
	cout << "Produto = " << n1 * n2 * n3 << endl;

	return 0;
}

