#include <iostream>

using namespace std;

void buscar(int x[5])
{
	int achou = 0;
	int i = 0, num = 0;

	// Digitando o número a ser buscado
	cout << "Digite o numero a ser buscado no vetor: ";
	cin >> num;
	
	i = 0;
	while (i <= 5 && achou == 0 && num >= x[i])
	{
		if (x[i]  == num)
		{
			achou = 1;
		}
		else
		{
			i++;
		}
	}

	if (achou == 0)
	{
		cout << "Numero nao encontrado no vetor" << endl;
	}
	else
	{
		cout << "Numero encontrado no vetor na posicao " << i + 1;
	}


}

int main(int argc, char** argv)
{
	int x[5];
	//carregando os números no vetor
	//vetor com números ordenados

	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o numero: " << endl;
		cin >> x[i];
	}

	buscar(x);
	return 0;
}



