#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

struct pessoa
{
	char nome[100];
	//char nome[100];
	int idade;
};


int main()
{
	pessoa p[100];
	//pessoa p;
	
	cout << "Qual seu Nome: " << endl;
    cin.getline(p[0].nome, sizeof(p[0].nome));
    //cin >> p.nome;
    
	cout << "Quantos anos voce tem? ";
	//cin >> p.idade;
	cin >> p[0].idade;
	cout << "Idade: " << p[0].idade << " anos" << endl;
	cout << "Nome: " << p[0].nome << endl;
	
	//cout << "Idade: " << p.idade << " anos" << endl;
	//cout << "Nome: " << p.nome << endl;
	
	

	return 0;
}


