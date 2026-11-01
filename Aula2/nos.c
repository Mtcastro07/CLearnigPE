#include "nos.h"
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
}ListaInteiros;

ListaInteiros* lista_insere(ListaInteiros* l, int i){
    ListaInteiros* novo =(ListaInteiros*) malloc(sizeof(ListaInteiros));
    novo->info = i;
};

void lista_exclui(ListaInteiros* l){
    ListaInteiros* p = l;
    while(p != NULL){
        ListaInteiros*t = p->prox;

        free(p);
        p = t;
    }
}

void lista_imprime(ListaInteiros* l){
    ListaInteiros* p;
    for(p = l; p!=NULL;p->prox){
        printf("info = %d\n", p->info);
    }
}