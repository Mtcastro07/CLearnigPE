#include <stdio.h>

int main(){
    int numero;
    int potencia;

    puts("Me diga o numero e a potencia que irei calcular-lo: ");
    scanf("%i", &numero);
    scanf("%i", &potencia);

    for(int i=1;i<potencia;i++){
        numero *= numero;
    }
    printf("O resultado: %i", numero);
    return 0;
}