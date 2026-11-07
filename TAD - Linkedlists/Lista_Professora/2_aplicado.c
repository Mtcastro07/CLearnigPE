#include <stdio.h>
#include <stdlib.h>
#include "2.h"

typedef struct no No;
typedef struct nos Nos;
struct no {
    int info;
    No* prox;
};
struct nos {
    Nos* listas;
    Nos* prox;
};

No* criar_lista(int valores){
    No* lista = NULL;
    for(int i=0;i<valores;i++){
        int info;
        scanf("%i", &info);
        No* novo_no = malloc(sizeof(No));
        novo_no->info = info;
        novo_no->prox = lista;
        lista = novo_no;
    }
    return lista;
}

int main(){
    int qntd;
    puts("Quantos valores ira ter em usa lista?");
    scanf("%i", &qntd);
    No* nova_lista  = criar_lista(qntd);
    imprimir_lista(nova_lista);
}