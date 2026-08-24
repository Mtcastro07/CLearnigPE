#include <stdio.h>

int main(){
    int l;
    int c;
    puts("Me diga o numero de linhas e o numero de colunas de sua matriz: ");
    scanf("%i %i", &l, &c);
    int matriz[l][c];

    for(int i=0;i<l;i++){
        puts("Me diga os valores dos inteiros da linha: ");
        for(int j=0;j<c;j++){
            int aux;
            scanf("%i", &aux);
            matriz[i][j] = aux;
        }
    }

    int maiorL = 0;
    int maior = 0;

    for(int i=0;i<l;i++){
        int soma = 0;
        for(int j=0;j<c;j++){
            soma+=matriz[i][j];
        }
        if(soma > maior){
            maiorL = i;
            maior = soma;
        }
    } 
    
    printf("A linha com a maior soma de seus termo: %i", maiorL);


    return 0;
}