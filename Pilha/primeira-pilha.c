#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;
struct pilha {
    int info;
    Pilha* prox;
    Pilha* ant;
};



