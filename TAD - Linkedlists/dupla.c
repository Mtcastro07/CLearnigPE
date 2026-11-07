#include <stdio.h>
#include <stdlib.h>

typedef struct no No;
struct no {
    int info;
    No* prox;
    No* ant;
};

No* criar_no(int info){
    No* novo_no = malloc(sizeof(No));
    novo_no->info = info;
    novo_no->prox = NULL;
    novo_no->ant = NULL;
    return novo_no;
}

void imprimir_lista_frente(No* List){
    while(List != NULL){
        printf("%i ", List->info);
        List = List->prox;
    }
}

void imprimir_lista_atras(No* List){
    while(List != NULL){
        printf("%i ", List->info);
        List = List->ant;
    }
}

int main(){
    No* Lista = NULL;
    No* ultimo = NULL;
    int achou_ultimo = 0;
    for(int i=0;i<5;i++){
        int info;
        scanf("%i", &info);
        No* novo_no = criar_no(info);
        novo_no->prox = Lista;
        if(Lista != NULL){
            Lista->ant = novo_no;
        }
        if(achou_ultimo == 0){
            ultimo = novo_no;
            achou_ultimo = 1;
        }
        Lista = novo_no;
    }
    imprimir_lista_frente(Lista);
    puts("\n");
    imprimir_lista_atras(ultimo);
}