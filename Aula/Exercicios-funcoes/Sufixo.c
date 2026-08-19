#include <stdio.h>
#include <stdbool.h>

int numeroDigitos(int n){
    int digitos = 0;
    while(n > 0){
        if(n < 10){
            digitos += 1;
           
            n /= 10;
            
        }else{
            digitos += 1;

            n /= 10;         
        }
    }
    return digitos;
}

int main(){
    int n1;
    int n2;
    int array1[100];
    int array2[100];

    puts("Me diga o valor do primeiro inteiro: ");
    scanf("%i", &n1);
    
    puts("Me diga o valor do segundo inteiro: ");
    scanf("%i", &n2);

    int numeroDigitos1 = numeroDigitos(n1);
    int numeroDigitos2 = numeroDigitos(n2);

    int k = 0;
    while(n1 > 0){
        if(n1 < 10){
            array1[k] = n1;
            n1 /= 10;
        }else{
            array1[k] = n1%10;
            n1 /= 10;
            k++;
        }
    }

    int l = 0;
    while(n2 > 0){
        if(n2 < 10){
            array2[l] = n2;
            n2 /= 10;
        }else{
            array2[l] = n2%10;
            n2 /= 10;
            l++;
        }
    }

    int leituraDireta = numeroDigitos2 - numeroDigitos1;
    int leituraReversa = numeroDigitos1 - numeroDigitos2;
    int presente = 0;

    if(leituraDireta > 0){
        for(int i=0; i<leituraDireta;i++){
            presente = 1;
            for(int j=i;i<(leituraDireta + i);j++){
                if(array1[i] != array2[j]){
                    presente = 0;
                    break;
                }
            }
            if(presente == 0 && i == (leituraDireta - 1)){
                puts("é sufixo!");
            }else if(presente == 0){
                puts("é segmento!");
            }
        }
    }

    if(leituraReversa > 0){
        for(int i=0; i<leituraReversa;i++){
            presente = 1;
            for(int j=i;i<(leituraReversa + i);j++){
                if(array1[i] != array2[j]){
                    presente = 0;
                    break;
                }
            }
            if(presente == 0 && i == (leituraReversa - 1)){
                puts("é sufixo!");
            }else if(presente == 0){
                puts("é segmento!");
            }
        }
    }


    return 0;
}