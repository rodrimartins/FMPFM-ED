#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    Lista *lista = criarLista();
    lista = inserirElemento(10, lista);
    lista = inserirElemento(15, lista);
    lista = inserirElemento(22, lista);
    imprimir(lista);
    int proc;
    proc = buscar(15, lista);
    printf("Elemento encontrado: %d \n", proc);
    if(verificarVazia(lista)==1){
        printf("Lista Vazia \n");
    }else{
        printf("Lista com elementos \n");
    }
    lista = removerElemento(15, lista);
    imprimir(lista);
    //lista = removerElemento(10, lista);
    //lista = removerElemento(22, lista);
    printf("\n\n\n");
    //imprimir(lista);
    printf("Tamanho da lista: %d \n", tamanho(lista));
    //lista = libera(lista);
    printf("Tamanho da lista: %d \n", tamanho(lista));

    Lista* lista2 = criarLista();
    lista2 = inserirElemento(10, lista2);
    lista2 = inserirElemento(15, lista2);
    lista2 = inserirElemento(22, lista2);
    imprimir(lista2);

    if(verificarIgualdade(lista, lista2)==1){
        printf("São lista iguais \n");
    }else{
        printf("São lista diferentes \n");
    }

    return 0;
}
