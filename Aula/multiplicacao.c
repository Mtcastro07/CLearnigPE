#include <stdio.h>

int multiplicacao(int n1, int n2, int aux){
    if(n2 > 0){
        n1 += aux;
        n2--;
        return multiplicacao(n1,n2,aux);
    }else{
        return n1-aux;
    }
}

int main(){
    int n1 = 6; 
    int n2 = 4;
    int aux = n1;
    printf("%i", multiplicacao(n1,n2,aux));

}