#include <stdio.h>
#include <stdlib.h>

typedef struct no No;
struct no {
    int info;
    No* prox;
};

No *criar_no(int info){
    No* novo_no = malloc(sizeof(No));
    novo_no->info = info;
    novo_no->prox = novo_no;
    return novo_no;
}


void imprimir_listaCircular(No* List){
    No* inicio = List;
    printf("%i", inicio->info);
    List = inicio->prox;
    do {
        printf("%i", List->info);
        List = List->prox;
    }while(List != inicio);
}

int main(){
    int info;
    No* Lista = NULL;
    No* ultimo = NULL;
    for(int i=0;i<5;i++){
        scanf("%i", &info);
        No* novo_no = criar_no(info);
        novo_no->prox = Lista;
        if(novo_no->prox == NULL){
            novo_no->prox = novo_no;
            ultimo = novo_no;
        }else{
            ultimo->prox = novo_no;
        }
        Lista = novo_no;
    }
    puts("terminou");
    imprimir_listaCircular(Lista);
    
}
