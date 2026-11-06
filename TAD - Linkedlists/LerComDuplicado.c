#include <stdio.h>
#include <stdlib.h>

typedef struct string Strings;
struct string {char *palavra; Strings* prox;};

int strlen(char s[]){
    int qntd = 0;
    int i = 0;
    while(s[i] != '\0'){
        qntd++;
        i++;
    }
    return qntd;
}

void strcopy(char origem[], char destino[]){
    int lenOrg = strlen(origem);
    for(int i=0;i<lenOrg;i++){
        destino[i] = origem[i];
    }
    destino[lenOrg
    ] = '\0';
}

void ordenar_palavras(Strings* No){
    Strings *atual = No;
    Strings *proximo = atual->prox;
    while(proximo != NULL){
        if(atual->palavra[0] > proximo->palavra[0]){
            char *temp = atual->palavra;
            atual->palavra = proximo->palavra;
            proximo->palavra = temp;
            
            atual = No;
            proximo = atual->prox;
        }else{
            atual = atual->prox;
            proximo = proximo->prox;
        }
    }
}

void ler_com_duplicado(char *arquivo, Strings *No){
    FILE *fe = fopen(arquivo, "r");
    char palavras[50][256];
    char linha[256];
    int i = 0;
    while(fscanf(fe,"%s",linha) == 1){
        int j,k = 0;
        while(linha[j] != '\0'){
            if(linha[j] != ' '){
                palavras[i][k] = linha[j];
                k++;j++;
            }else{
                palavras[i][k] = '\0';
                i++;k = 0;j++;
            }
        }
    }
    Strings *Lista = No;
    for(int l=0;l<i;l++){
        strcopy(palavras[l],Lista->palavra);
        Lista = Lista->prox;
    }
}

