#include <iostream>

using namespace std;

void buscar(int x[])
{
	int achou = 0, inicio = 0, fim = 9, meio = 0;
	int num = 0;
	meio = (inicio + fim) / 2;

	// Digitando o número a ser buscado
	cout << "Digite o numero a ser buscado no vetor: ";
	cin >> num;

	fim = 9;
	meio = (inicio + fim) / 2;

	while (inicio <= fim && achou == 0)
	{
		if (x[meio]  == num)
			achou = 1;

		else
		{
			if(num < x[meio])
				fim = meio - 1;
			else
				inicio = meio + 1;

		meio = (inicio + fim) / 2;
		}
	}

	if (achou == 0)
	{
		cout << "Numero nao encontrado no vetor" << endl;
	}
	else
	{
		cout << "Numero encontrado no vetor na posicao " << meio + 1;
	}
}

int main(int argc, char** argv)
{
	int x[10];
	//carregando os números no vetor
	//vetor com números ordenados

	for (int i = 0; i < 10; i++)
	{
		cout << "Digite o numero: " << endl;
		cin >> x[i];
	}

	buscar(x);
	return 0;
}



