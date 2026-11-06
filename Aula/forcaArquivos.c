#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int forca(char *arquivo){
    FILE *fe = fopen(arquivo, "r");
    char palavras[100][255];
    char palavra[255];
    int i = 0;

    while(fscanf(fe,"%s",palavra) == 1){
        strcpy(palavras[i],palavra);
        i++;
    }
    for(int i=0;i<6;i++){
        char advinha[255];
        scanf("%s", advinha);
        getchar();
        for(int j=0;j<i+1;j++){
            if(strcmp(advinha,palavras[j])==0){
                return 1;
            }
        }
    }
    return -1;
}

int main(){
    char *arquivo = "palavras.txt";
    int result = forca(arquivo);
    printf("%i", result);
}

