#include <iostream>
#include <stack>


using namespace std;


int main(int argc, char** argv)
{
	stack <int> valor;

	valor.push(10);
	valor.push(20);
	valor.push(30);
	valor.push(40);

	cout << "Tamanho da pilha: " << valor.size() << endl;


	while(!valor.empty())
	{
		cout << "Valores " << valor.top() << endl;
		valor.pop();
	}
	
	if(valor.empty())
	{
		cout << "Pilha vazia" << endl;
	}
	
	
	return 0;
}
