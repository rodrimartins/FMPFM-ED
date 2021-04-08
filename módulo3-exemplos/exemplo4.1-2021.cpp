#include <iostream>

using namespace std;

//exemplo de alocação dinâmica de memória


int main(int argc, char** argv)
{
	int *pA = NULL;
	
	
	// comando new é reponsável pela alocaçõ dinâmica de memória
	// é criado uma área necessária para 01 inteiro e será colocado
	// *pA o endereço desta área
	
	pA = new int;
	
	cout << "Endereco de *pA: " << pA << endl;
	*pA = 2021;
	
	cout << "Conteudo de *pA: " << *pA << endl;
	
	
	// quando o valor já não é mais necessário liberamos a memória alocada
	//dinamicamente através do comando delete
	delete pA;
	return 0;
}
