#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " numero: " << x[i] << endl;
	}
}

void selectionSort(int x[])
{
	int posicaoMenorValor = 0;
	int eleito = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 5; i++)
	{
		posicaoMenorValor = i;

		for (j = i + 1; j < 5; j++)
		{
			if (x[j] < x[posicaoMenorValor]){
				posicaoMenorValor = j;
			}
		}
		
		if (posicaoMenorValor != i){
			eleito = x[i];
			x[i] = x[posicaoMenorValor];
			x[posicaoMenorValor] = eleito;
		}
	}



}

int main(int argc, char** argv)
{
	int x[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o numero: " << endl;
		cin >> x[i];
	}

	imprimeVetor(x);
	cout << endl;
	selectionSort(x);
	imprimeVetor(x);
	return 0;
}
