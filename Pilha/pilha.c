#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct fila FilaDupla;

struct fila {
    float info;
    FilaDupla* prox;
    FilaDupla* ant;
};

FilaDupla* fila_start(){
    int qntd;
    scanf("%i", &qntd);
    FilaDupla* Lista = NULL;

    for(int i=0;i<qntd;i++){
        FilaDupla* novo_no = malloc(sizeof(FilaDupla));
        puts("Me diga qual o valor");
        float aux;
        scanf("%f", &aux);
        novo_no->info = aux;
        if(Lista == NULL){
            novo_no->prox = Lista;
            novo_no->ant = NULL;
        }else{
            Lista->ant = novo_no;
            novo_no->prox = Lista;
            novo_no->ant = NULL;
        }
        Lista = novo_no;
    }
    return Lista;
}

FilaDupla* fila_enqueue_b(FilaDupla* f, float v){
    FilaDupla* Lista = f;
    FilaDupla* novo_no = malloc(sizeof(FilaDupla));
    
}