#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
	
	int num = 0;
	
	cout << "Digite o tamanho do vetor: " << endl;
	cin >> num;
	
	double a[num], b[num], soma[num];
	
	for (int i = 1 ; i <= num; i++){
		
		cout << "Informe o " << i << " valor do vetor a " << endl;
		cin >> a[i];
		
		cout << "Informe o " << i << " valor do vetor b " << endl;
		cin >> b[i];
		
		soma[i] = a[i] + b[i];
		
	}
	
	cout << endl << endl; 
	
	for (int i = 1 ; i <= num; i++){
		
		cout << "Soma dos Vetores na posicao: " << i << endl;
		cout << "Numero: " << soma[i] << endl;
		
	}
	
	

	
}