#include <stdlib.h>
#include <stdio.h>

void sort(int *v){
    int troca = 0;
    for(int i=0;i<2;i++){
        for(int j=1+i;j<3;j++){
            if(v[i] > v[j]){
                troca = 1;
                int trocando = v[i];
                v[i] = v[j];
                v[j] = trocando;
            }
        }
    }
    if(troca == 1){
        sort(v);
    }else{
        for(int i=0;i<3;i++){
            printf("%i ", v[i]);
        }
        if(v[0] == v[1] && v[1]== v[2]){
        printf("1");
    }else{
        printf("0");
    }
}
    }
    

void main(){
    int *vetor = (int*) malloc(3 * sizeof(int));
    for(int i=0;i<3;i++){
        scanf("%i",&vetor[i]);
    }
    sort(vetor);
}