#include <iostream>

using namespace std;

void imprimeVetor(int x[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " numero: " << x[i] << endl;
	}
}

void insertionSort(int x[])
{

	int j = 0;
	int eleito = 0;

	for (int i = 1; i <= 4; i++)
	{
		eleito = x[i];
		j = i - 1;

		while (j >= 0 && x[j] > eleito)
		{
			x[j + 1] = x[j];
			j--;
		}
		x[j + 1] = eleito;
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
	insertionSort(x);
	imprimeVetor(x);
	return 0;
}
