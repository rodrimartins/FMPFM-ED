#include <iostream>

using namespace std;

void imprimeVetor(int vetor[])
{

	for (int i = 0; i < 5; i++)
	{
		cout << " |" << vetor[i] << "| ";
	}

}

void bubbleSort2(int vetor[])
{

	int aux = 0;
	//ordenando de forma crescente
	//laço com a quantidade de elementos do vetor -1
	for (int j = 1; j <= 4; j++)
	{
		//laço que percorre da última posição
		// até a posição j do vetor
		for (int i = 4; i >= j; i--)
		{
			if (vetor[i] < vetor[i - 1])
			{
				aux = vetor[i];
				vetor[i] = vetor[i - 1];
				vetor[i - 1] = aux;
			}
		}
	}
}

int main(int argc, char** argv)
{
	int vetor[5];

	//entrada de dados
	for (int i = 0; i <= 4 ; i++ )
	{
		cout << "Digite o numero: " << endl;
		cin >> vetor[i];
	}

	imprimeVetor(vetor);
	bubbleSort2(vetor);
	cout << endl;
	imprimeVetor(vetor);

	return 0;
}
