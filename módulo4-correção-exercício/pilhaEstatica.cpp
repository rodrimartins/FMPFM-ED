#include <iostream>

#define tam 5
using namespace std;



typedef struct
{
	int topo;
	int item[tam];

} PILHA;

void iniciaPilha(PILHA &pilha)
{

	pilha.topo = -1;

}

bool pilhaVazia(PILHA pilha)
{
	if (pilha.topo == -1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

bool pilhaCheia(PILHA pilha)
{
	if (pilha.topo == tam - 1 )
	{
		return true;
	}
	else
	{
		return false;
	}

}

void push(PILHA &pilha, int x)
{
	pilha.topo++;
	pilha.item[pilha.topo] = x;

}

int pop(PILHA &pilha){
	
	return pilha.item[pilha.topo--];
}


int main(int argc, char** argv)
{

	int cont = 0;
	PILHA pilha;

	//criando a pilha
	iniciaPilha(pilha);

	push(pilha, 10);
	push(pilha, 20);
	push(pilha, 30);
	push(pilha, 40);
	push(pilha, 50);


	do
	{
		cout << "Valor empilhado: " << pilha.item[cont] << endl;
		cont++;
	}
	while (cont != tam);
	
	if (pilhaCheia(pilha))
	{
		cout << "A pilha esta cheia" << endl;
	}
	else
	{
		cout << "A pilha naum esta cheia" << endl;
	}

	do{
		cout << "Valor desempilhado: " << pop(pilha) << endl;
	}while (pilha.topo != -1);
	
	
	
	//verifica se a pilha está vazia
	if (pilhaVazia(pilha))
	{
		cout << "A pilha esta vazia" << endl;
	}
	else
	{
		cout << "A pilha naum esta vazia" << endl;
	}
	

	return 0;
}
