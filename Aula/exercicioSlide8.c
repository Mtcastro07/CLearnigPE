#include <stdio.h>

int main(){
    int numero;
    int numeros;
    
    puts("Me diga o numero que voce ira comparar e a quantidade de numeros: ");
    scanf("%i %i", &numero, &numeros);

    for(int i=0;i<numeros;i++){
        int numeroComparar;
        scanf("%i", &numeroComparar);
        if(numeroComparar < numero){
            puts("O seu numero é maior");
        }else{
            puts("O seu numero é menor");
        }
    }
    return 0;
}