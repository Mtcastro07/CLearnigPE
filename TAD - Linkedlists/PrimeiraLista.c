#include <stdlib.h>
#include <stdio.h>

typedef struct no No;
struct no {
    int valor;
    No* prox;
};


No* inserir_inicio(No* Lista, int valor){
    No* novo_no = malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->prox = Lista;
    return novo_no;
}
void print_valores_lista(No* lista){
    No* no_atual = lista;
    while(no_atual != NULL){
        printf("%i ", no_atual->valor);
        no_atual = no_atual->prox;
    }
}

void ordenar_lista(No* lista){
    No* atual = lista;
    No* proximo = atual->prox;

    while(proximo != NULL){
        if(atual->valor > proximo->valor){
           int posicaoAtual = atual->valor;
           atual->valor = proximo->valor;
           proximo->valor = posicaoAtual;  
           atual = lista;
           proximo = atual->prox;
        }else{
            atual = atual->prox;
            proximo = proximo->prox;
        }
    }
}

int main(){
    No* lista = NULL;
    int valores = 0;
    puts("Me diga quantos valores voce quer colocar dentro da lista");
    scanf("%i", &valores);
    for(int i=0;i<valores;i++){
        int valor_aux;
        scanf("%i", &valor_aux);
        lista = inserir_inicio(lista, valor_aux);
    }
    print_valores_lista(lista);
    ordenar_lista(lista);
    print_valores_lista(lista);
    free(lista);
}