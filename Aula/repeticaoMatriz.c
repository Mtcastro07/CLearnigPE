#include <stdio.h>

int repeticaoMatriz(int l, int c, int v[l][c]){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<l;k++){
                for(int m=0;m<c;m++){
                    if(v[i][j] == v[k][m] && ( m!=j || k != i)){
                        return 1;
                    }
                }
            }
        }
    }
    return -1;
}

int main(){
    int l = 3;
    int c = 3;
    int matriz[l][c];

    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            int aux;
            scanf("%i", &aux);
            matriz[i][j] = aux;
        }
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("%i", repeticaoMatriz(l,c,matriz));
}