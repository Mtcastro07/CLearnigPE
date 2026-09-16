#include <stdio.h>
#include <stdlib.h>

void somaDobro(int *p1, int *p2){
    int soma = 2*(*p1);
    *p1 = soma;
    int soma2 = 2*(*p2);
    *p2 = soma2;
    printf("o dobro de p1:%i e o dobro de p2:%i seria igual a:%i ", *p1, *p2, *p1+*p2);
}

void main(){
    int a = 5;
    int b = 10;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    somaDobro(p1,p2);
}