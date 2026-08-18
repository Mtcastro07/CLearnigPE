#include <stdio.h>

long long sequenciaThibonacci(int n){
    long long termoAnterior = 13;
    long long termoAnterior2 = 3;
    long long termoAtual;
    for(int i=0;i<n;i++){
        termoAtual = termoAnterior + (termoAnterior2*termoAnterior2 - 1);
        termoAnterior2 = termoAnterior;
        termoAnterior = termoAtual;
    }
    return termoAtual;
}

int main(){

    int primeiroT = 3;
    int segundoT = 13;
    int nTermo;


    scanf("%i", &nTermo);
    if(nTermo == 1){
        printf("%i", 3);
    }else if(nTermo == 2){
        printf("%i", 13);
    }else{
        int resultado = nTermo - 2;
        long long resultadoPrint = sequenciaThibonacci(resultado);
        printf("%lld", resultadoPrint);
    }


    return 0;
}