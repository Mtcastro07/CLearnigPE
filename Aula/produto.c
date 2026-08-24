#include <stdio.h>

int main(){

    puts("Me diga o numero de linhas e colunas da primeira matriz: ");
    int l1,c1;
    scanf("%i %i", &l1, &c1);
    int matriz1[l1][c1];

     puts("Me diga o numero de linhas e colunas da segunda matriz: ");
    int l2,c2;
    scanf("%i %i", &l2, &c2);
    int matriz2[l2][c2];

    int matrizR[l1][c2];

    if(l1 != c2){
        puts("Numero de linhas e colunas invalido!");
    }else{
        for(int i=0;i<l1;i++){
            puts("Me diga os valores dos itens na linha: ");
            int aux1;
            scanf("%i", aux1);
            matriz1[l1][c1] = aux1;
        }

         for(int i=0;i<l2;i++){
            puts("Me diga os valores dos itens na linha: ");
            int aux2;
            scanf("%i", aux2);
            matriz1[l2][c2] = aux2;
        }

        for(int i=0;i<l1;i++){
            for(int j=0;j<c2;j++){
                int somaL = 0;
                for(int k=0;k<c1;k++){
                    somaL+=matriz1[i][k];
                }
                int somaC = 0;
                for(int l=0;l<l2;l++){
                    somaC += matriz2[j][l];
                }
                matrizR[i][j] = somaL + somaC;
            }
        }
    }

    for(int i=0;i<l1;i++){
        for(int j=0;j<c2;j++){
            printf("%i ", matrizR[i][j]);
        }
    }




    return 0;
}