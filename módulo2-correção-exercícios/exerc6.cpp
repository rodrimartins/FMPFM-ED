#include <iostream>
#include <string>

#define totalDias 5

using namespace std;


int main(int argc, char** argv)
{

	double temp[totalDias], acum = 0, media = 0;
	double maior =0 , menor=0;
	int qtdDias=0;
	
	for (int i =0; i < totalDias; i++){
		cout << "Digite a temperado do dia: " << i + 1 << endl;
		cin >> temp[i];
		
		acum += temp[i];
		
		if (i == 0){
			maior = temp[i];
			menor = temp[i];
		}
		
		if (temp[i] < menor){
			menor = temp[i];
		}
		
		if (temp[i] > maior){
			maior = temp[i];
			
		}
			
	}
	
	media = acum / totalDias;
	
	for(int i =0; i < totalDias; i++){
		
		if (temp[i] < media ){
			qtdDias++;
		}
	}
	
	cout << "A menor temperatura eh: " << menor << endl;
	cout << "A maior temperatura eh: " << maior << endl;
	cout << "A media diaria eh: " << media << endl;
	cout << "A quantidade de dias inferior a media: " << qtdDias << endl; 	
	
	   
	   	
}