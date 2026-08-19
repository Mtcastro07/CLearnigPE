#include <stdio.h>

int digitos(int n1){
    int numeros[5000];
    int temRepeticao = 0;
    int i = 0;
    while(n1 >= 10){
        numeros[i] = n1 % 10;
        n1 /= 10;
        i++; 
    }
    numeros[i] = n1;

    for(int j=0;j<i+1;j++){
        for(int k=0;k<i+1;k++){
            if(numeros[j] == numeros[k] && k != j){
                temRepeticao = 1;
                break;
            }
        }
        if(temRepeticao == 1){
            break;
        }
    }
    if(temRepeticao == 1){
        return 1;
    }else{
        return 0;
    }

} 

int main(){
    int n1;
    int n2;
    int repeticoes;
    while (scanf("%i %i", &n1, &n2) == 2) {
    repeticoes = 0;
    int a = n1;
    while(a <= n2){
        if(digitos(a)==0){
            repeticoes++;
            a++;
        }else{
            a++;
        }
    }
    printf("%i\n", repeticoes);
}
return 0;
}
