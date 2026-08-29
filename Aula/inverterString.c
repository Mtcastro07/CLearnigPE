
#include <stdio.h>
#include <string.h>

int inverterString(char v[], int tamanho, char r[], int i){
    if(tamanho > i){
        r[i] = v[tamanho - (i+1)];
        i++;
        return inverterString(v,tamanho,r,i);
    }else{
        
        for(int j=0;j<i;j++){
            printf("%c", r[j]);
        }
        return 0;
    }
}

int main(){
    char palavra[100];
    char resultado[100];
    scanf("%99s",palavra);
    int len = strlen(palavra);
    inverterString(palavra, len, resultado, 0);

}