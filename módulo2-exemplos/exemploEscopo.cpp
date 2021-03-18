#include <iostream>

using namespace std;

// vari�vel com escopo global
int num_global = 12;

void escopo()
{
	//vari�vel com escopo local
	int num = 10;
	static int num_static = 1;
	
	cout << "variavel local: " << num << endl;
	cout << "variavel global: " << num_global << endl;
	
	num_static++;
	cout << "variavel estatica: " << num_static << endl;
}

int main(int argc, char *argv[])
{
	escopo();
	cout << endl;
	escopo();
	cout << endl;
	escopo();
	return 0;
}





