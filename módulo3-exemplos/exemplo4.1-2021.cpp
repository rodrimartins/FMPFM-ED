#include <iostream>

using namespace std;

//exemplo de aloca��o din�mica de mem�ria


int main(int argc, char** argv)
{
	int *pA = NULL;
	
	
	// comando new � repons�vel pela aloca�� din�mica de mem�ria
	// � criado uma �rea necess�ria para 01 inteiro e ser� colocado
	// *pA o endere�o desta �rea
	
	pA = new int;
	
	cout << "Endereco de *pA: " << pA << endl;
	*pA = 2021;
	
	cout << "Conteudo de *pA: " << *pA << endl;
	
	
	// quando o valor j� n�o � mais necess�rio liberamos a mem�ria alocada
	//dinamicamente atrav�s do comando delete
	delete pA;
	return 0;
}
