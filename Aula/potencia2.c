#include <stdio.h>

int calcular(int num, int pow){
    
    if(pow == 0){
        return 1;
    }

    if(pow == 1){
        return num;
    }
    if(pow > 1){
        return num * calcular(num, pow-1);
    } 
}

int main(){
    int numero = 8;
    int potencia = 4;
    printf("%i", calcular(numero, potencia));
}