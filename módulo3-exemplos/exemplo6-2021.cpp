#include <iostream>

using namespace std;

//exemplo de ponteiro de Struct


typedef struct data{
	
	short dia;
	short mes;
	short ano;
	
} Data;


int main(int argc, char** argv)
{
	Data data;
	Data *hoje;
	hoje = &data;
	
	(*hoje).dia = 07;
	(*hoje).mes = 04;
	(*hoje).ano = 2021;
	
	cout << "Data registrada: " << endl;
	cout << hoje ->dia << "/" << hoje->mes << "/" << hoje->ano << endl; 
	
	
	
	
	
	return 0;
}
