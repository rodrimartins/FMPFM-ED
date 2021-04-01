#include <iostream>

using namespace std;

//exemplo de aloca��o din�mica de mem�ria


int main()
{
	int *ptr_a;

// new ---> cria a �rea necess�ria para 01 inteiro e
// coloca em 'ptr_a' o endere�o desta �rea.
	ptr_a = new int;

	cout << "Endereco de ptr_a: " <<  ptr_a << endl;
	*ptr_a = 90;
	cout << "Conteudo de ptr_a: " << *ptr_a << endl;

	// Quando o valor j� n�o � necess�rio pode ser liberada a mem�ria
	//reservada atrav�s do comando delete.
	//Na aloca��o din�mica liberar mem�ria � responsabilidade do usu�rio
	delete ptr_a;
}

