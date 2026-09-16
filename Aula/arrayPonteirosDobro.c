#include <stdio.h>
#include <stdlib.h>

void arrayPoints(int *v,int len,int i){
    if(i < len){
        printf("O dobro do valor na posicao %i seria: %i", i, *(v + i)*2);
        i++;
    }
}
void main(){
    int i = 0;
    int len = 5;
    int *array = (int*) malloc(len * sizeof(int));
    for(int i=0; i<len;i++){
        scanf("%i", &array[i]);
    }
    arrayPoints(array, len, i);
}