#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dadosP(char *arquivo){
    FILE *fe = fopen(arquivo,"r");
    char nomes[100][256];
    char generos[100][256];
    char pesos[100][256];
    char idades[100][256];
    char alturas[100][256];
    char olhos[100][256];
    char escolaridades[100][256];
    char linha[256];
    char **acumulador = malloc(10*sizeof(char));
    for(int i=0;i<10;i++){
        acumulador[i] = malloc(10*sizeof(char));
    }
    int i =0;
    while(fscanf(fe,"%s %s %s %s %s %s %s", nomes[i], generos[i],alturas[i],pesos[i],idades[i],olhos[i],escolaridades[i] ) == 7){
        
    }
    
}