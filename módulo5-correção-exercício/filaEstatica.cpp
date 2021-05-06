#include <iostream>

#define TAM 10


using namespace std;

void iniciaFila(int *inicio, int *fim)
{

	*inicio = 0;
	*fim = -1;

}


void enfileirar(int fila[TAM], int valor, int *fim)
{
	if (*fim == TAM - 1  )
	{
		cout << "Fila cheia" << endl;
	}
	else
	{

		*fim = *fim + 1;
		fila[*fim] = valor;
	}
}

void desenfileirar(int fila[TAM], int *inicio, int *fim)
{

	if (*inicio > *fim)
	{
		cout << "Fila vazia" << endl;

	}
	else
	{

		cout << "O valor " << fila[*inicio] << " foi removido " << endl;
		fila[*inicio] = 0;
		*inicio = *inicio + 1;

	}

}

void imprimirFila(int fila[TAM])
{

	for (int cont = 0; cont < TAM; cont++)
	{

		cout << fila[cont] << endl;
	}

}




int main(int argc, char** argv)
{
	int fila[TAM] = {};

	int inicio, fim;

	iniciaFila(&inicio, &fim);

	enfileirar(fila, 10, &fim);
	enfileirar(fila, 9, &fim);
	enfileirar(fila, 8, &fim);
	enfileirar(fila, 7, &fim);
	enfileirar(fila, 6, &fim);
	enfileirar(fila, 5, &fim);
	enfileirar(fila, 4, &fim);
	enfileirar(fila, 3, &fim);
	enfileirar(fila, 2, &fim);
	enfileirar(fila, 1, &fim);


	imprimirFila(fila);


	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);
	desenfileirar(fila, &inicio, &fim);


	imprimirFila(fila);

	return 0;
}
