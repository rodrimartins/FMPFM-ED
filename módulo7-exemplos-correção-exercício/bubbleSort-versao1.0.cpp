#include <iostream>

#define TAM 10

using namespace std;

void imprimeVetor(int vetor[TAM])
{

	for (int i = 0; i < TAM; i++)
	{
		cout << " |" << vetor[i] << "| ";
	}

}

void bubbleSort(int vetor[TAM])
{

	int x, y, aux;

	//valor da esquerda sendo analisado
	for (x = 0; x < TAM; x++)
	{
		//valor da direita sendo analisado
		for (y = x + 1; y < TAM; y++)
		{
			//an�lise se � necess�rio a troca
			if (vetor[x] > vetor[y]){
				aux = vetor[x];
				vetor[x] = vetor[y];
				vetor[y] = aux;
			}
		}

	}

}


int main(int argc, char** argv)
{
	int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	imprimeVetor(vetor);
	cout << endl;

	bubbleSort(vetor);
	imprimeVetor(vetor);


	return 0;
}
