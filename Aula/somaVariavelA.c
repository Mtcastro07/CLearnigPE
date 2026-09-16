#include <stdio.h>
#include <stdlib.h>

int somaA(int *p1, int *p2){
    int soma = *p1 + *p2;
    *p1 = soma;
    printf("A soma dos numeros seria: %i, e o valor da variavel b: %i", *p1, *p2);
}

void main(){
    int *p1 = malloc(sizeof(int));
    int *p2 = malloc(sizeof(int));
    int a = 10;
    int b = 15;
    p1 = &a;
    p2 = &b;
    somaA(p1,p2);
}