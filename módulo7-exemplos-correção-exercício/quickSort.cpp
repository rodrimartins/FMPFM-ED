#include <iostream>

using namespace std;


#define TAM 10

void imprimeVetor(int x[])
{
	for (int i = 0; i < TAM; i++)
	{
		cout << i + 1 << " numero: " << x[i] << endl;
	}
}

void quickSort(int x[TAM], int inicio, int fim)
{
	int pivo, esq, dir, meio, aux;

	//limites da esquerda e direita da região analisada
	esq = inicio;
	dir = fim;

	//ajustando auxiliares do centro
	meio = (int) (esq + dir) / 2;
	pivo = x[meio];

	while(dir > esq)
	{
		while (x[esq] < pivo)
		{
			esq = esq + 1;
		}

		while (x[dir] > pivo)
		{
			dir = dir - 1;
		}


		if (esq <= dir)
		{
			aux = x[esq];
			x[esq] = x[dir];
			x[dir] = aux;
			
			esq++;
			dir--;
		}
		
		if (inicio < dir){
			quickSort(x, inicio, dir);
		}
		
		if (esq < fim){
			quickSort(x, esq, fim);
		}
		
		
		
	}
}



int main(int argc, char** argv)
{
	int x[TAM];

	for (int i = 0; i < TAM; i++)
	{
		cout << "Digite o numero: " << endl;
		cin >> x[i];
	}

	imprimeVetor(x);
	cout << endl;
	quickSort(x, 0, TAM);
	imprimeVetor(x);
	return 0;
}
