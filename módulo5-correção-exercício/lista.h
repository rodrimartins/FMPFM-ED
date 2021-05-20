/*Tipo abstrato de dados para um estrutura de lista
    TAD de um struct lista */
typedef struct lista Lista;

/*Fun��o que cria e devolve uma lista vazia (ponteiro para lista vazia) */
Lista * criarLista();

/* Fun��o que insere um elemento na lista. O primeiro inserido
   aponta para nulo, indicando fim da lista, o proximo aponta para
   a cabe�a da lista */
Lista * inserirElemento(int valor, Lista *l);

/* Fun��o para impress�o de toda a lista */
void imprimir(Lista *l);

/*Fun��o que faz busca por um elemento na lista
  procura um valor passado por parametro na lista */
int buscar(int valorProc, Lista *l);

/* Verificar se a lista esta vazia ou n�o
   1 - se a lista estiver vazia
   0 - se a lista conter dados */
int verificarVazia(Lista *l);

/*
Fun��o para remover um elemento da lista
O valor e a lista s�o passado como par�metros
Procura-se o valor na lista, e se encontrar
liberar o espaco de memoria e acertar o encadeamento */
Lista * removerElemento(int valor, Lista *l);

/*
Fun��o para veriricar se duas listas passadas como
par�metros s�o exatamente iguais
Retorna:
1 - Se forem iguais
0 - Se forem diferente */
int verificarIgualdade(Lista *l1, Lista *l2);

/*
Fun��o que liber um espa�o de memoria
Ideia � liberar um a um quando desejar desalocar
os dados da lista */
Lista * libera(Lista *l);

/*
Fun��o que retorna o tamanho de uma lista
passada como par�metro */
int tamanho(Lista *l);




