#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct circulo{
    int x;
    int y;
    int raio;
}Circulo;

Circulo* criarCiculo(int* x, int* y, int* raio){
    Circulo* circle = malloc(sizeof(Circulo));
    puts("Me diga o valor do x, y e do raio do seu circulo");
    circle->x = *x;
    circle->y= *y;
    circle->raio = *raio;
    return circle;
}

void liberarCirculo(Circulo* circulo){
    free(circulo);
}

void calcularArea(Circulo* circulo, int* resultado){
    *resultado = 3*(circulo->raio*circulo->raio);
}

void pontoDentro(Circulo* circulo, int* resultado, int x, int y){
    int distancia = pow((pow(circulo->x - x,2) + pow(circulo->y - y,2)),1/2);
    if(distancia <= circulo->raio){
        *resultado = 1;
    }else{
        *resultado = -1;
    }
}