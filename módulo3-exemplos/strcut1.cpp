#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <string>

using namespace std;

// criando um tipo de dado
struct data
{
	//criando 3 membros
	int dia;
	int mes;
	int ano;
};



int main (void)
{
	data hoje;

	cout << "Que dia eh hoje? ";
	cin >> hoje.dia;
	cout << "Qual mes? ";
	cin >> hoje.mes;
	cout << "Qual ano? ";
	cin >> hoje.ano;
	cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
	system("pause");

	return 0;
}

