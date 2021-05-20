struct lista {
    int valor;
    Lista *prox;
};


Lista * criarLista(){
    return NULL; //criando lista vazia
}

Lista * inserirElemento(int valor, Lista *l){
    Lista *no = (Lista*) malloc(sizeof(Lista));
    no->valor = valor;
    no->prox = l;
}


void imprimir(Lista *l){
    Lista *p;
    for(p = l; p !=NULL; p = p->prox){
        printf("Posicao: %ld \n", p);
        printf("Valor guardado: %d \n", p->valor);
    }
}


int buscar(int valorProc, Lista *l){
    Lista *p;
    p = l;
    while(p != NULL && p->valor !=valorProc){
        p = p->prox;
    }
    return p->valor;
}


int verificarVazia(Lista *l){
    if(l == NULL){
        return 1;
    }
    return 0;
}


Lista * removerElemento(int valor, Lista *l){
    Lista *ant = NULL;
    Lista *p = l;
    while(p!=NULL && p->valor != valor){
        ant = p;
        p = p->prox;
    }
    if(p == NULL) return l; //devolve sem remover
    if(ant == NULL){
        l = p->prox;
    }else{
        ant->prox = p->prox;
    }
    free(p);
    return l;
}


int verificarIgualdade(Lista *l1, Lista *l2){
    Lista *p1 = l1;
    Lista *p2 = l2;
    while(p1 != NULL && p2 != NULL){
        if(p1->valor != p2->valor) return 0;
        p1 = p1->prox;
        p2 = p2->prox;
    }
    if(p1 == NULL && p2 == NULL) return 1;
    return 0;
}


Lista * libera(Lista *l){
    Lista *p;
    p = l;
    while(p != NULL){
        Lista *temp = p->prox;
        free(p);
        p = temp;
    }
    return NULL;
}


int tamanho(Lista *l){
    Lista *p = l;
    int t = 0;
    while(p !=NULL){
        t++;
        p = p->prox;
    }
    return t;
}