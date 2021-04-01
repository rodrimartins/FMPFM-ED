#include <iostream>
#include <string>


using namespace std;

int main(int argc, char** argv)
{
	double alunos[20], media = 0, acum = 0;
	int acimaMedia = 0;
	
	
	for (int i= 0; i < 20; i++){
		
		cout << "Informe a nota do aluno " << i + 1 << endl;
		cin >> alunos[i];
		acum += alunos[i];
		
	}
	
	media = acum / 20;
	
	for (int i= 0; i < 20; i++){
		
		if (alunos[i] > media){
			
			acimaMedia++;
		}
		
	}
	
	cout << "Media da turma: " << media << endl;
	cout << "Quantidade de alunos acima da media: " << acimaMedia << endl;
	
	
	
	
	
	return 0;
}