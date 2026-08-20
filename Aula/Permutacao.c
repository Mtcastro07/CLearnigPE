#include <stdio.h>

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

int contaDigitos(int n){
    int digitos = numeroDigitos(n);
    int numero[100];
    
    int k = 0;
    for(int i=0;i<digitos;i++){
        if(n < 10){
            numero[k] = n;
            n /= 10;
        }else{
            numero[k] = n%10;
            n /= 10;
            k++;
        }
    }
    
    
    int j = 1;
    for(int i=0;i<digitos - 1;i++){
         int repeticao = 0;
        for(  j; j<digitos;j++){
            if(numero[i] == numero[j]){
                repeticao++;
            }
        }
        if(repeticao > 0){
            printf("O numero %i repetiu %i vezes", numero[i], repeticao);
        }
        j++;
    }
    return digitos;

}

int main(){
    int numero = 5412434;
    int numero2 = 4321445;

    if(contaDigitos(numero) == contaDigitos(numero2)){
        puts("É uma permutação");
    }else{
        puts("Não é uma permutação!");
    }
    
    return 0;
}