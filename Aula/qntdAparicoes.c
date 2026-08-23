#include <stdio.h>

int main(){
    int n;
    int vet[n];
    puts("Me diga a quantidade de elementos no seu vetor:");
    scanf("%i", &n);
    for(int i=0;i<n;i++){
        int nAux;
        scanf("%i", nAux);
        vet[i] = nAux;
    }
    int vetTermos[n];

    for(int i=0;i<n;i++){
        int acumulador = 0;
        for(int j=0;j<n;j++){
            if(vet[i] == vet[j] && j != i){
                acumulador++;
            }
        }
        vetTermos[i] == acumulador;
    }

    for(int i=0;i<n;i++){
        printf("O termo %i aparece %i vezes", vet[i],vetTermos[i]);
    }

    
}