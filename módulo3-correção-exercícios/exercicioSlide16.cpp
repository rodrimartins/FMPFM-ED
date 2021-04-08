#include <iostream>
#include <cstdlib>


using namespace std;

struct pessoa
{
	char nome[50];
	char endereco[50];
	char cpf[20];
	int idade;

};

int main(int argc, char** argv)
{
	pessoa p[5];

	for (int i = 0; i < 5; i++)
	{
		
		cout << "Digite o nome da pessoa: " << i + 1 << endl;
		cin.ignore(); //limpa buffer
		
		cin.getline(p[i].nome, 50);
		cout << "Digite o endereco da pessoa: " << endl;
		cin.getline(p[i].endereco, 50);
		cout << "Digite o cpf da pessoa: " << endl;
		cin.getline(p[i].cpf, 50);
		cout << "Digite o idade da pessoa: " << endl;
		cin >> p[i].idade;
		system("cls");
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Nome da pessoa: " << i+1 << " eh: " << p[i].nome << endl;
		cout << "Endereco da pessoa: " << i+1 << " eh: "  << p[i].endereco << endl;
		cout << "CPF da pessoa: " << i+1 << " eh: " << p[i].cpf << endl;
		cout << "Idade da pessoa: " << i+1 << " eh: " << p[i].idade << endl;
		cout << endl << endl;

	}


	return 0;
}
