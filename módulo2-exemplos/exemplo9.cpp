#include <iostream>
#include <string.h>

using namespace std;

void inverte(char nome[])
{
	//strlen retorna o tamanho da string
	int tam = strlen(nome);
	for (int i = tam - 1; i >= 0; i--)
	{
		cout << nome[i];
	}
}

int main()
{
	char nome[] = "1Rodrigo";
	inverte(nome);
	cout << endl;
	
	//isalpha retorna true se caractere testado for alfabético
	if (isalpha(nome[0]))
	{
		cout << "caractere alfabetico" << endl;
	}
	else
	{
		cout << "caractere numerico" << endl;
	}

	//isdigit retorna true se for um dígito
	if (isdigit(nome[0]))
	{
		cout << "numero" << endl;
	}
	else
	{
		cout << "letra" << endl;
	}

	//isupper retorna true se o caractere for maiusculo
	if (isupper(nome[0]))
	{
		cout << "maiusculo" << endl;
	}
	else
	{
		cout << "minusculo" << endl;
	}
	return 0;
}





