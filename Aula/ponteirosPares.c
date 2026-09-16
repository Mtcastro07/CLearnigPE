#include <stdio.h>
#include <stdlib.h>

void pares(int *v, int i, int len){
    if(i < len){
        if(*(v + i) %2 == 0){
            printf("A posicao: %i possui um valor par\n", i );
            i++;
               pares(v,i,len);
        }else{
            printf("O valor da posicao: %i é impar\n", i);
            i++;
            pares(v,i,len);
        }
    }
}

void main(){
    int len = 5;
    int i = 0;
    int *valor = (int*) malloc(len * sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%i", &*(valor + i));
    }
    pares(valor, i, len);

}

