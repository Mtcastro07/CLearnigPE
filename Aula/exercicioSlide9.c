#include <stdio.h>

int main(){
    int qntdCaracteres;
    char frase[100];

    puts("Me diga a quantidade de letras da sua palavra ou frase, que irei entregar ela com letras maiusculas:");
    scanf("%i", &qntdCaracteres);
    getchar();

    for(int i=0;i<qntdCaracteres;i++){
        char letra = getchar();
        getchar();

        if(letra == 32){
            frase[i] = letra;
        }else if(32 <= letra <= 127){
        letra -= 32;
        frase[i] = letra;
        }else{
            frase[i] = letra;
        }
        
    }
    for(int j=0;j<qntdCaracteres;j++){
        printf("%c", frase[j]); 
    }
    return 0;
}

