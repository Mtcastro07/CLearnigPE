#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int *b = malloc(sizeof(int));
    int **c = malloc(sizeof(int*));
    int ***d= malloc(sizeof(int**));
    int dobro = 2;
    int *triplo = malloc(sizeof(int));
    int triplioV = 3;
    int quadV = 4;
    int *quad = malloc(sizeof(int));
    int **quadC = malloc(sizeof(int*));
    b = &dobro;
    triplo = &triplioV;
    c = &triplo;
    quad = &quadV;
    quadC = &quad;
    d = &quadC;

    scanf("%i", &a);
    printf("O dobro:%i, o triplo:%i, e o quadruplo:%i", a*(*b), a*(**c), a*(***d));
    
    
}