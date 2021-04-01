#include <iostream>
#include <cstdlib>

#define numPessoas 5

using namespace std;

struct Pessoa
{
	char nome[50];
	char endereco[50];
	char cpf[14];
	int idade;
};

int main(int argc, char** argv)
{
	Pessoa p[numPessoas];

	for(int i = 0; i < numPessoas; i++)
	{
		cout << "Digite o nome " << i + 1 << endl;
		cin >> p[i].nome;
		cout << "Digite o endereco: ";
		cin >> p[i].endereco;
		cout << "Digite o cpf: ";
		cin >> p[i].cpf;
		cout << "Digite a idade: ";
		cin >> p[i].idade;
		system("cls"); //para o programa limpar a tela
	}

	for(int i = 0; i < numPessoas; i++)
	{
		cout << p[i].nome << " "
			 << p[i].endereco << " "
			 << p[i].cpf << " "
			 << p[i].idade << " " << endl;

	}

}
