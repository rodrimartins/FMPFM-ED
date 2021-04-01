#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
	
	int vetor[20];
	
	for (int i = 0; i < 20; i++){
		cout << "Digite o numero " << i + 1 << endl;
		cin >> vetor[i];
		
	}
	
	for (int i = 19; i >= 0; i--){
		cout << "Numeros " << vetor[i] << endl;
		
	}
	
}
	
	
	
