#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int nr = 0;
	do
	{
		cout << "Digite o numero: ";
		cin >> nr;

		if (nr % 2 == 0)
		{
			cout << "Este numero eh par" << endl;
		}
		else
		{
			cout << "Este numero eh impar" << endl;
		}

		system("pause");
		system("cls");

	}
	while (nr != 0);
	return 0;
}


