#include <stdio.h>
#include <stdlib.h>

char substituir(char *c, char alvo, char novo){
    if(*c != '\0'){
        if(*c == alvo){
            *c = novo;
            return substituir(c + 1, alvo, novo);
        }else{
            return substituir(c+ 1, alvo, novo);
        }
    }else{
        return *c;
    }
}

int main(){
    int tamanho_palavra;
    char alvo;
    char novo;
    puts("Qual o tamanho da sua palavra?");
    scanf("%i", &tamanho_palavra);
    
    char *palavra = malloc(tamanho_palavra * sizeof(char));
    puts("Me diga qual a sua palavra");
    fgets(palavra,tamanho_palavra,stdin);
    puts("Me diga qual letra deseja substituir");
    scanf("%c", &alvo);
    getchar();

    puts("Me diga qual a sua nova letra");
    scanf("%c", &novo);
    getchar();

    
}
