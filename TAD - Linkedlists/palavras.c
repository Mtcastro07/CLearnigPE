#include "palavras.h"
#include <stdlib.h>

typedef struct palavra {
    char *string;
}Palavra;

int contar_letras(char* palavra){
    int i = 0;
    int qntd = 0;
    while(palavra[i] != '\0'){qntd++;i++;};
    return qntd;
};

void copiar(char* palavra1,char* palavra2){
   int i = 0;
    while(palavra1[i] != '\0'){
        palavra2[i] = palavra1[i];
        i++;
    }
    palavra2[i] = '\0';
}

void concatenar(char* dest, char* origem){
    int lenOrigem = contar_letras(origem);
    int lenDest = contar_letras(dest);
    origem = realloc(origem, sizeof(char)*(lenOrigem + lenDest + 1));
    int i = 0;
    while(dest[i] != '\0'){
        origem[lenOrigem + i] = dest[i];
        i++;
    }
    origem[lenOrigem + i] = '\0';
}