#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3, media, freq;
	cout << "Digite a frequencia: ";
	cin >> freq;
	cout << "Digite a nota 1: ";
	cin >> n1;
	cout << "Digite a nota 2: ";
	cin >> n2;
	cout << "Digite a nota 3: ";
	cin >> n3;
	media = (n1 + n2 + n3) / 3;
	if (freq >= 75)
	{
		if (media >= 7.0)
		{
			cout << "Aprovado com media " << media << " e frequencia " << freq;
		}
		else if(media >= 3)
		{
			cout << "Exame";
		}
		else
		{
			cout << "Reprovado";
		}
	}
	else
	{
		cout << "Reprovado por falta";
	}
	return 0;
}


