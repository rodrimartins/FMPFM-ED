#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 10; // declara��o e a inicializa��o de vari�vel
	int *pa = NULL; // declara��o e a inicializa��o do ponteiro
	pa = &a; // ponteiro *pa recebe o endere�o da vari�vel a
	*pa = 100; // o valor do ponteiro *pa � alterado, logo o endere�o que est�
				// sendo apontado tamb�m se altera

	cout << *pa << endl;
	cout << a << endl;
	cout << &pa << endl;
	cout << &a << endl;
	


	return 0;
}
