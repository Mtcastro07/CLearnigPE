#include <stdio.h>

float calculo(int n, int aux, float res){
    if(n > 0){
        res+= 1.0f/aux;
        aux++;
        n--;
        return calculo(n, aux, res);
    }else{
        return res;
    }
}

int main(){
    int n = 4;
    printf("%f ", calculo(n, 1, 0));
}