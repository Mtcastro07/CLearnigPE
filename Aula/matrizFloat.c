#include <stdio.h>
#include <stdlib.h>

void matrizLeitura(int l, int c, float **m, int i, int j){
    if(i <= l   && j<=c){
        printf("O endereco é: %p\n", &m[i][j]);
        j++;
        if(j == c ){
            j = 0;
            i++;
        }
        matrizLeitura(l,c,m,i,j);
    }
}

void main(){
    int l = 3;
    int c = 3;
    float **matriz = (float **) malloc(l * sizeof(float*));
    for(int i=0;i<3;i++){
        matriz[i] = (float *) malloc(c*sizeof(float));
    }
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    matrizLeitura(l,c,matriz,0,0);

}