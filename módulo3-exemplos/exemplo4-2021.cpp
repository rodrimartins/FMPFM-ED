#include <iostream>

using namespace std;

//exemplo de ponteiro de Array


int main(int argc, char** argv)
{
	
	int arrayA[] = {10,20,30,40,50};
	int *pArrayA = &arrayA[0];
	
	cout << *pArrayA << endl << endl;
	
	for(int i = 0; i < 5; i++){
		cout << *pArrayA << endl;
		pArrayA++;
		
	}


	

	return 0;
}
