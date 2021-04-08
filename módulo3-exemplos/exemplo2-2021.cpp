#include <iostream>

using namespace std;

//exemplo de passagem de conteúdo por valor

// escopo global	
	int varA = 0;


void passagemValor(int varA){
	
	varA = 100;
	
}


int main(int argc, char** argv)
{

	varA = 10;
	
	passagemValor(varA);
	
	cout << varA << endl;
	

	return 0;
}
