/* programa que calcula o perímetro e a área de uma
circunferência de raio R (fornecido pelo usuário) */

#include <iostream> // inclui diretivas de entrada-saída
#include <cmath> // inclui diretivas das funções matemáticas */

using namespace std;
#define PI 3.14159

int main( )
{

	int raio;
	float perim, area;

	cout << "Entre com o valor do raio: ";
	cin >> raio;

	perim = 2 * PI * raio;
	area = PI * pow(raio, 2);

	cout << "O perimetro da circunferencia de raio " << raio
		 << " eh " << perim << endl;
	cout << "e a area eh " << area << endl;

	return 0;
}

