#include <iostream>

using namespace std;

int my_strlen(char * str)
{
	int tam = 0;

	while(*str != '\0')
		//while(!true)
	{
		str++; //incremento de ponteiro
		tam++;
	}
	return tam;
}

char *my_strcat(char *dest, char *orig) //função que retorna um ponteiro
{
	char *resultado;
	int tam_dest = my_strlen(dest);
	int tam_orig = my_strlen(orig);

	resultado = new char[tam_dest + tam_orig]; //aloca espaço
	char *p_str = resultado;
	while(*dest != '\0')
	{
		*p_str = *dest;
		p_str++;
		dest++;
	}
	while(*orig != '\0')
	{
		*p_str = *orig;
		p_str++;
		orig++;
	}
	*p_str = '\0';
	return resultado;
}

int main(int argc, char *argv[])
{
	//usando alocação dinâmica de memória
	char *nome1 = new char[100]; //essa linha aloca espaço de 100 caracteres
	char *nome2 = new char[100]; //essa linha aloca espaço de 100 caracteres

	cout << "Digite o primeiro nome: ";
	cin >> nome1;
	cout << "Digite o segundo nome: ";
	cin >> nome2;

	cout << "Resultado: " << my_strcat(nome1, nome2) << endl;
	return 0;
}



