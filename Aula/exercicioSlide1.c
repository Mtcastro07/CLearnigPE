#include <stdio.h>

int contarDigitos(int n, int d){
    int nRepeticoes = 0;
    while(n > 0){
       if(n %10 == d){
        nRepeticoes++;
        n /= 10;
       }else{
        n /= 10;
       }
    }
    
    return nRepeticoes;
}

int digitos(int n1, int n2){
    
}

int main(){
    int numero = 230000003;
    int n = 0;
    printf("%i", contarDigitos(numero, n));
    return 0;
}