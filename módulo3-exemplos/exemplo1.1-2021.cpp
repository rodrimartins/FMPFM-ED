#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	short varA = 200;
	int varB = 300;
	long varC = 400;
	
	cout << "**** Valores e seus endereços ****" << endl;
	cout << "Valor de varA =  " << varA << ", Endereço de varA = " << &varA << endl;
	cout << "Valor de varB =  " << varB << ", Endereço de varB = " << &varB << endl;
	cout << "Valor de varC =  " << varC << ", Endereço de varC = " << &varC << endl;	
	


	return 0;
}
