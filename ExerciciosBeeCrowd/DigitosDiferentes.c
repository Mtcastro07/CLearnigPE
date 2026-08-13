#include <stdio.h>

int digitos( int n){
    int digitos = 0;
    while(n > 10){
        n /= 10;
        digitos += 1;
    }digitos += 1;
    return digitos;
}

int digito(int n){
    int digito;
    if(n > 10){
        digito = n % 10;
    }else{
        digito = n;
    }
    return digito;

}


int main(){
    int numeros[5000];
    int numero1 = 87;
    int numero2 = 104;
    int diferentes = 0;

    

    while(numero1 < numero2){

        int nDigitos = digitos(numero1);

        for(int i=0;i<nDigitos;i++){
           
            if(numero1 < 10){
                 numeros[digitos(numero1)] = digito(numero1);
                 break;
            }else {
                 numeros[digitos(numero1)] = digito(numero1);
                 numero1 /= 10;
            }
        }
        for(int i=0;i<nDigitos - 1;i++){
            for(int j=1;j<nDigitos;j++){
                if(numeros[i] != numeros[j]){
                    diferentes++;
                }
            }
        }
        numero1 = numero1 + 1;
    }
    printf("%i", diferentes);

}