#include <iostream>

using namespace std;

#define NOTAS 5


float calculaMedia(float notas[]);

int main(int argc, char** argv)
{
	float notas[NOTAS];
	float media;
	int acima = 0;

	for( int i = 0 ; i < NOTAS; i++)
	{
		cout << "Digite a nota " << i + 1 << ": " << endl;
		cin >> notas[i];
		
	}
	
	media =  calculaMedia(notas);
	
	cout << "Media: " << media << endl;
	
	for(int i = 0; i < NOTAS; i++){
		
		if (notas[i] >= media){
			acima++;
		}
	}
	
	cout << "Quantidade de notas acima da media: " << acima << endl;
	cout << "Quantidade de notas abaico da media: " << NOTAS - acima;

	return 0;
}

float calculaMedia(float notas[])
{
	   float total;
	   for (int i = 0; i < NOTAS; i++){
		   
		   total += notas[i];
		   
	   }
	   
	   return total / NOTAS;	
	
}