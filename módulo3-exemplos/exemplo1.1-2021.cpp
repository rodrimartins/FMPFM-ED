#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	short varA = 200;
	int varB = 300;
	long varC = 400;
	
	cout << "**** Valores e seus endere�os ****" << endl;
	cout << "Valor de varA =  " << varA << ", Endere�o de varA = " << &varA << endl;
	cout << "Valor de varB =  " << varB << ", Endere�o de varB = " << &varB << endl;
	cout << "Valor de varC =  " << varC << ", Endere�o de varC = " << &varC << endl;	
	


	return 0;
}
