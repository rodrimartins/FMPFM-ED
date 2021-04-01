#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
	string nome[3];
	string nomePesq, resultado="Nao Achei";
	
	for (int i = 0; i < 3; i++){
		
		cout << "Informe o nome de pessoa " << i + 1 << endl;
		cin >> nome[i];
			
	}
	
	cout << "Informe um nome para pesquisar" << endl;
	cin >> nomePesq;
	
	for (int i = 0; i < 3; i++){
		
		if (nome[i] == nomePesq) {
			resultado = "Achei";
		}
		
	}
	
	cout << resultado;
	
	
	return 0;
}
