#include <stdio.h>



int main(){
    int meses = 0;
    int anos = 0;
    int dias = 0;
    int entrada;

    scanf("%i", &entrada);

    while(entrada > 0){
        
        if(entrada >= 365){
            anos = entrada/365 + anos;
            entrada = entrada % 365;
        }else if(entrada >= 30){
            meses += entrada/30 + meses;
            entrada = entrada % 30;
        }else{
            dias += entrada;
            break;
        }
    }

    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", anos, meses, dias);
    return 0;

}

