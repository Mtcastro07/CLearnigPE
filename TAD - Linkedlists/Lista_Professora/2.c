#include <stdio.h>
#include <stdlib.h>
#include <2.h>

typedef struct no No;
typedef struct nos Nos;
struct nos {Nos* listas; Nos* prox;};
struct no {
    int info;
    No* prox;
};

int search(No* Lista, int alvo){
    while(Lista != NULL){
        if(Lista->info == alvo){
            return 1;
        }
    }
    return -1;
}

No* concatenar(No* Lista1, No* Lista2){
    No* Lista_Concatenada = Lista1;
    while(Lista1 != NULL){
        Lista_Concatenada = Lista1;
        Lista1 = Lista1->prox;
        Lista_Concatenada = Lista_Concatenada->prox;
    }
    while(Lista2 != NULL){
        Lista_Concatenada = Lista2;
        Lista2 = Lista2->prox;
        Lista_Concatenada = Lista_Concatenada->prox;
    }
    Lista_Concatenada->prox = NULL;
    return Lista_Concatenada;
}

No* dividir_sublistas(No* Lista, int qntd){
    int contagem = 0;
    No* Leitura_Lista = Lista;
    while(Leitura_Lista != NULL){
        contagem++;
        Leitura_Lista->prox;
    }
    int divisoes = contagem/qntd;
    Nos* listas = NULL;
    for(int i=0;i<qntd;i++){
        No* sublista = NULL;
        for(int j=0;j<divisoes;j++){
            No* novo_no = Lista;
            novo_no->prox = sublista;
            sublista = novo_no;
        }
        Nos* nova_lista = sublista;
        nova_lista->prox = listas;
        listas = nova_lista;
    }
    return listas;
}

No* copiar_lista(No* Lista){
    return Lista;
}

void sort(No* Lista){
    int troca = 1;
    while(troca == 1){
        troca = 0;
        No* atual = Lista;
        No* proximo = atual->prox;
        while(proximo != NULL){
            if(atual->info > proximo->info){
                No* aux = proximo;
                proximo = atual;
                atual = aux;
                troca = 1;
                break;
            }
            atual = proximo;
            proximo = proximo->prox;
        }
        
    }
}

void imprimir_lista(No* Lista){
    while(Lista != NULL){
        printf("%i ", Lista->info);
        Lista = Lista->prox;
    }
}

