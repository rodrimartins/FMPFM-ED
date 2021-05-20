/*Tipo abstrato de dados para um estrutura de lista
    TAD de um struct lista */
typedef struct lista Lista;

/*Função que cria e devolve uma lista vazia (ponteiro para lista vazia) */
Lista * criarLista();

/* Função que insere um elemento na lista. O primeiro inserido
   aponta para nulo, indicando fim da lista, o proximo aponta para
   a cabeça da lista */
Lista * inserirElemento(int valor, Lista *l);

/* Função para impressão de toda a lista */
void imprimir(Lista *l);

/*Função que faz busca por um elemento na lista
  procura um valor passado por parametro na lista */
int buscar(int valorProc, Lista *l);

/* Verificar se a lista esta vazia ou não
   1 - se a lista estiver vazia
   0 - se a lista conter dados */
int verificarVazia(Lista *l);

/*
Função para remover um elemento da lista
O valor e a lista são passado como parâmetros
Procura-se o valor na lista, e se encontrar
liberar o espaco de memoria e acertar o encadeamento */
Lista * removerElemento(int valor, Lista *l);

/*
Função para veriricar se duas listas passadas como
parâmetros são exatamente iguais
Retorna:
1 - Se forem iguais
0 - Se forem diferente */
int verificarIgualdade(Lista *l1, Lista *l2);

/*
Função que liber um espaço de memoria
Ideia é liberar um a um quando desejar desalocar
os dados da lista */
Lista * libera(Lista *l);

/*
Função que retorna o tamanho de uma lista
passada como parâmetro */
int tamanho(Lista *l);




