#include <stdio.h>

void troca(int *p, int *p2){
    int a;
    a = *p;
    *p = *p2;
    *p2 = a;
    printf("O valor de *p agora: %i e o valor de *p2: %i", *p, *p2);
}

int main(){
    int a = 5;
    int b = 10;
    int *p,*p2;
    p = &a;
    p2 = &b;
    troca(p,p2);
}