#include <iostream>
using namespace std;

int main()
{
	int score = 5;
	cout << 10 / 2 + 10 % 3 << endl; // 6
	cout << 10 / 4 << endl; // 2
	cout << 10.0 / 4.0 << endl; // 2.5
	cout << 'A' + 'B' << endl; // Tabela ASCII A = 65 B = 66 = 131
	cout << score + (score == 0) << endl; // 5 + 0 = 5
	cout << score + (score == 5); // 5 + 1 = 6

	return 0;
}


