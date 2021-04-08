#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int array[10];
	int *pArray = &array[0];

	for(int i = 0; i < 10; i++)
	{
		cout << "Digite um valor inteiro: ";
		cin >> array[i];
	}

	for (int i = 0; i < 10; i++)
	{
		cout << *pArray << endl;
		pArray++;
	}

	cout << endl;

	pArray = &array[9];
	for (int i = 10; i > 0; i--)
	{
		cout << *pArray << endl;
		pArray--;
	}
}

