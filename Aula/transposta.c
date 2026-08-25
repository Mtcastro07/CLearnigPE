#include <stdio.h>

int main(){
    int l,c;
    puts("Me diga o numero de linhas e colunas de sua matriz, sabendo que ela sera transposta: ");
    scanf("%i %i", &l, &c);
    int matriz[l][c];
    
    int linhas = 1;
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            int aux;
            scanf("%i", &aux);
            matriz[i][j] = aux;
        }
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<linhas;j++){
            int trocando = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = trocando;
        }
        linhas++;
    }

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }


}