#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	short varA = 200;
	int varB = 300;
	long varC = 400;
	
	cout << "**** Valores e seus enderešos ****" << endl;
	cout << "Valor de varA =  " << varA << ", Enderešo de varA = " << &varA << endl;
	cout << "Valor de varB =  " << varB << ", Enderešo de varB = " << &varB << endl;
	cout << "Valor de varC =  " << varC << ", Enderešo de varC = " << &varC << endl;	
	


	return 0;
}
