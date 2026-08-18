#include <stdio.h>

int fatorial(int n){
    int fatorial = 1;
    if(n == 0){
        return 1;
    }else{
    while(n > 0){
        fatorial *= n;
        n -= 1;
    }
    return fatorial;
}
}

int main(){
    int numero;
    int intermediario = 0;
    float result = 0;
    puts("Me diga um numero que farei sua soma especifica: ");
    scanf("%i", &numero);
    for(int i=0;i<numero;i++){
        float numeroFatorado = fatorial(intermediario);
        result += 1.0/numeroFatorado;
        intermediario++;
       
    }

    printf("%f", result);
}