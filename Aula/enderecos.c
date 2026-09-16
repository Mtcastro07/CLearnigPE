#include <stdio.h>
#include <stdlib.h>

int identificarEnderecos(int *v[], int tam){
    int *vR[tam];

    for(int i=0;i<tam;i++){
        vR[i] = v[i];
    }

    for(int i=0;i<tam;i++){
        printf("O endereço de memoria da posicao %d é: %p\n", i, vR[i]);
    }
    return 0;

}

int main(){
   int *p1 = malloc(sizeof(int));
   int *p2 = malloc(sizeof(int));
   int *p3 = malloc(sizeof(int));

   int a = 3;
   int b = 4;
   int c = 5;

   p1 = &a;
   p2 = &b;
   p3 = &c;

   int *v[3] = {p1,p2,p3};

   identificarEnderecos(v,3);

}