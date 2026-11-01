#include <stdio.h>

typedef struct lista {
    int posicao;
    struct lista* prox;
}ListaSeparada;

int len_Lista(ListaSeparada* l){
    int contar = 0;
    ListaSeparada* p;
    for(p = 1;p != NULL;p = p->prox){
        contar++;
    }
    return contar;
}

void dividir_metade(ListaSeparada* l, int lista_metade1[], int i1, int lista_metade2[],int i2){
    int len_lista = len_Lista(l)/2;
    ListaSeparada *p;
    for(p=1;p < len_lista; p->prox){
        lista_metade1[i1] = l->posicao;
    }
    for(p=len_lista;p=NULL;p->prox){
        lista_metade2[i2] = l->posicao;
    }
}
