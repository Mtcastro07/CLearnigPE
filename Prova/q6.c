#include <stdio.h>
#include <stdlib.h>

int contarLetras(char *palavra){
    static int n = 0;
    if(*palavra != '\0'){
        n++;
        return contarLetras(palavra + 1);
    }else{
        return n;
    }
}

void comandosStrings(char *arquivo_entrada, char *arquivo_saida){
    FILE *fe = fopen(arquivo_entrada, "r");
    FILE *fs = fopen(arquivo_saida, "w");
    
   
    char comando;
    char *palavra = malloc(30*sizeof(char));
    
    while(fscanf(fe, "%c %s",&comando,palavra)==2){
        int len = contarLetras(palavra);
        if(comando == 73){
            for(int i=0;i<len/2;i++){
                int aux = palavra[i];
                palavra[i] = palavra[len -1];
                palavra[len - 1] = aux;
            }
        }else{
            for(int i=0;i<len;i++){
                palavra[i]+= 32;
            }
        }
    }
    printf("%s", palavra);
}

int main(){
    char *entrada = "entrada.txt";
    char *saida = "saida.txt";
    comandosString(entrada, saida);
}