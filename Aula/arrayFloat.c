#include <stdio.h>
#include <stdlib.h>

void enderecos(float *v[], int i, int len){
    if(i < len){
        printf("o valor do endereco do elemento %i seria:%p\n",i,v[i]);
        i++;
        enderecos(v, i,len);
    }
}

int main(){
    float *vetor[10];
    for(int i=0;i<10;i++){
     
        vetor[i] = (float *) malloc(sizeof(float));
        scanf("%f", vetor[i]);
    }
    enderecos(vetor, 0, 10);
}