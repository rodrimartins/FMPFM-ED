#include <iostream>

using namespace std;

//exemplo de alocação dinâmica de memória


int main()
{
	int *ptr_a;

// new ---> cria a área necessária para 01 inteiro e
// coloca em 'ptr_a' o endereço desta área.
	ptr_a = new int;

	cout << "Endereco de ptr_a: " <<  ptr_a << endl;
	*ptr_a = 90;
	cout << "Conteudo de ptr_a: " << *ptr_a << endl;

	// Quando o valor já não é necessário pode ser liberada a memória
	//reservada através do comando delete.
	//Na alocação dinâmica liberar memória é responsabilidade do usuário
	delete ptr_a;
}

