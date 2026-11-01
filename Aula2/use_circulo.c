#include <stdio.h>
#include <stdlib.h>
#include <circulo.h>

typedef struct circulo {
    int x;
    int y;
    int raio;
}Circulo;

int main(){
    int *x = 5;
    int *y = 5;
    int *raio = 10;
    int *resultadoA = 0;
    int *resultado = 0;
    criarCiculo(x,y,raio);
    calcularArea(, resultadoA);

}