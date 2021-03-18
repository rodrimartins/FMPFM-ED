#include <iostream>
#include "minhaFuncao.h"

using namespace std;

int main(int argc, char** argv)
{
	int num = 0;
	
	cout << "Digite o numero para calculo" << endl;
	cin >> num;
	
	cout << "Fatorial do " << num << ": " << fatorial(num) << endl;
	cout << "Area do Quadrado com lado " << num << ": " << 
	areaQuadrado(num) << endl;
	cout << "Area do Retangulo:  " << areaRetangulo(num, num) << endl;
	
	return 0;
}