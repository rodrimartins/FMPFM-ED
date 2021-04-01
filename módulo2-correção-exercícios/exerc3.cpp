#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv)
{

	double a[10], m[10], x = 0;

	for(int i = 0; i < 10; i++)
	{

		cout << "Digite o valor " << i + 1 << endl;
		cin >> a[i];
	}
	
	cout << "Digite o multiplicador do vetor: " << endl;
	cin >> x;
	
	for(int i = 0; i < 10; i++)
	{
		m[i] = a[i] * x;
		cout << i + 1 << " multiplicado " << m[i] << endl;
		
	}


}
