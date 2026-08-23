#include <stdio.h>


int main(){
    int k;
    puts("Me diga qual numero voce quer multiplicar a diagonal da matriz: ");
    scanf("%i", &k);
    int m;
    puts("Me diga o tamanho da matriz: ");
    scanf("%i", &m);

    int matriz[m][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int aux;
            scanf("%i", &aux);
            matriz[i][j] = aux;
        }
    }
    for(int i=0;i<m;i++){
        matriz[i][i] *= k;
    }

    
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
        printf("%i ", matriz[i][j]);
    }
    printf("\n");
    }


    


    return 0;
}