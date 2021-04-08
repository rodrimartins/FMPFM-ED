#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int a = 10; // declaração e a inicialização de variável
	int *pa = NULL; // declaração e a inicialização do ponteiro
	pa = &a; // ponteiro *pa recebe o endereço da variável a
	*pa = 100; // o valor do ponteiro *pa é alterado, logo o endereço que está
				// sendo apontado também se altera

	cout << *pa << endl;
	cout << a << endl;
	cout << &pa << endl;
	cout << &a << endl;
	


	return 0;
}
