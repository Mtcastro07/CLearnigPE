#include <stdio.h>
#include <stdlib.h>

int somar(int *p, int *k){
    if(*p <= 1){
        return 0;
    }else{
        if(*p % 10 == *k){
            *p /= 10;
            return 1 + (somar(p, k));
        }else{
            *p /= 10;
            return (somar(p,k));
        }
    }
}

int main(){
    int *p = malloc(sizeof(int));
    int *k = malloc(sizeof(int));

    scanf("%i %i",p,k);
    printf("%i", somar(p,k));
    
}