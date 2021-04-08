#include <iostream>

using namespace std;

//exemplo de passagem parâmetros por referência

// escopo global	
	int varA = 0;


void passagemPorReferencia(int *varA){
	
	*varA = 100;
	
}


int main(int argc, char** argv)
{

	varA = 10;
	
	int *pA = NULL;
	pA = &varA;
	
	passagemPorReferencia(pA);
	
	cout << varA << endl;
	

	return 0;
}
