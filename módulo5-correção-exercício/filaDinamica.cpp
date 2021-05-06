#include <iostream>
#include <queue>

using namespace std;


int main(int argc, char** argv)
{

	queue <string> pessoas;

	pessoas.push("Rodrigo");
	pessoas.push("Lucas");
	pessoas.push("Muller");
	pessoas.push("João Pedro");

	cout << "Tamanho da fila: " << pessoas.size() << endl;

	//while(!pessoas.empty()){

	cout << "Primeira pessoa da fila: " << pessoas.front() << endl;
	pessoas.pop();
//	}

	cout << "Tamanho da fila: " << pessoas.size() << endl;
	cout << "Primeira pessoa da fila: " << pessoas.front() << endl;
	pessoas.pop();

	cout << "Tamanho da fila: " << pessoas.size() << endl;





	return 0;
}
