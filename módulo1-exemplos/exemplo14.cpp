#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int n = 10;
	while(n <= 100)
	{
		if (n > 30)
		{
			break;
		}
		cout << n << endl;
		n++;
	}
	return 0;
}


