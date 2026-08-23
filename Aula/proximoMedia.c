#include <stdio.h>

int main(){
    int qntd;

puts("Me diga a quantidade de notas");
    scanf("%i", &qntd);

    float notas[qntd];
    float somatorio = 0;
    
    for(int i=0;i<qntd;i++){
        float aux;
        scanf("%f", &aux);
        somatorio += aux;
        notas[i] = aux;
    }
    float media = somatorio/qntd;

    float diferentenca = 100000000000.0;
    float resultado = 0;

    for(int i=0;i<qntd;i++){
        if(media - notas[i] < 0){
            if(notas[i] - media < diferentenca){
                diferentenca = notas[i] - media;
                resultado = notas[i];
            }
        }else if(media - notas[i] < diferentenca){
            diferentenca = media - notas[i];
            resultado = notas[i];
        }
    }
    printf("O numero mais proximo da media é: %f", resultado);


    return 0;

}