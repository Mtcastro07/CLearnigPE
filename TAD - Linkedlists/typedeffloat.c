#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Float {
    float x;
    float y;
}Floats;

float distancia(Floats *a, Floats *b){
    float resultado = pow(((pow(a->x - b->x,2)) + (pow(a->y - b->y,2))),0.5);
    return resultado;
}

int main(){
   Floats *c1 = malloc(sizeof(Floats));
   Floats *c2 = malloc(sizeof(Floats));

   scanf("%f %f",&c1->x,&c1->y);
   getchar();
   scanf("%f %f",&c2->x,&c2->y);
   printf("A distancia calculada seria: %f",distancia(c1,c2));

   free(c1);
   free(c2);
}