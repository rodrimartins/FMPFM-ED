#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

typedef struct data
{
	//para declarar que um número seja apenas positivo (incluindo o 0),
	//usamos o modificador unsigned:
	unsigned short dia;
	unsigned short mes;
	unsigned int ano;
} Data;

typedef struct aniversario
{
	char nome[50];
	Data nascimento;
} Aniversario;

int main ()
{
	Aniversario alguem;
	cout << "Digite o nome de alguem" << endl;
	cin >> alguem.nome;
	cout << "Digite o dia que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.dia;
	cout << "Digite o mes que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.mes;
	cout << "Digite o ano que esta pessoa nasceu" << endl;
	cin >> alguem.nascimento.ano;
	system ("cls");

	cout << alguem.nome << endl;
	cout << "nasceu em ";
	cout << alguem.nascimento.dia << "/";
	cout << alguem.nascimento.mes << "/";
	cout << alguem.nascimento.ano << endl;

	system ("pause");
	return 0;
}

