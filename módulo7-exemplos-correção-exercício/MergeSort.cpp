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

void merge(int x[TAM], int indiceEsquerdo, int meio, int indiceDireito )
{
	int i, j, k;
	//tamanho do primeiro vetor auxiliar
	int n1 = meio - indiceEsquerdo + 1;
	//tamanho do segundo vetor auxiliar
	int n2 = indiceDireito - meio;


	//cria dois arrays temporários
	int vetorEsquerdo[n1], vetorDireito[n2];

	for(i = 0; i < n1; i++)
	{
		vetorEsquerdo[i] = x[indiceEsquerdo + i];
	}

	for(j = 0; j < n2; j++)
	{
		vetorDireito[j] = x[meio + 1 + j];
	}

	//reseta as variáveis
	i = 0;
	j = 0;
	k = indiceEsquerdo;

	while (i < n1 && j < n2)
	{
		//se o valor da esquerda for menor
		if (vetorEsquerdo[i] <= vetorDireito[j])
		{
			x[k] = vetorEsquerdo[i];
			i++;
		}
		else
		{
			x[k] = vetorDireito[j];
			j++;
		}
		k++;
	}

	while( i < n1)
	{
		x[k] = vetorEsquerdo[i];
		i++;
		k++;
	}

	while( j < n2)
	{
		x[k] = vetorDireito[j];
		j++;
		k++;
	}
}

void mergeSort(int x[TAM], int indiceEsquerdo, int indiceDireito)
{
	if (indiceEsquerdo < indiceDireito)
	{
		//encontra o meio
		int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) / 2;

		//da metade para trás
		mergeSort(x, indiceEsquerdo, meio);

		//da metade para frente
		mergeSort(x, meio + 1, indiceDireito);

		//une os dois subarrays que foram criados
		merge(x, indiceEsquerdo, meio, indiceDireito);

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
	mergeSort(x, 0, TAM - 1);
	imprimeVetor(x);
	return 0;
}
