#include <stdio.h>

int main(){
    int termos;
    int termoAtual = 1;
    float denominador = 1;
    float resultado = 0;

    puts("Me diga o valor do termo que irei aproximar o valor de pi: ");
    scanf("%i", &termos);

    for(int i=0;i<termos;i++){
        if(termoAtual % 2 == 0){
            resultado -= 1/denominador;
            termoAtual++;
            denominador += 2;
        }else{
            resultado += 1/denominador;
            denominador +=2;
            termoAtual++;
        }
    }
    float resultadoFinal = resultado*4;
    printf("O numero do seu pi é: %f", resultadoFinal);
    return 0;
}