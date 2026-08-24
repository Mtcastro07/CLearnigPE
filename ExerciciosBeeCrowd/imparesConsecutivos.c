#include <stdio.h>

int main(){
    int qntd;
    scanf("%i", &qntd);
    for(int i=0;i<qntd;i++){
        int total = 0;
        int n1;
        int n2;
        int parar = 0;
        scanf("%i %i", &n1,&n2);
        if(n1 > n2){
            int trocando = 0;
            trocando = n2;
            n2 = n1;
            n1 = trocando;
        }
        if(n1 == n2){
            parar = 1;
        }
        n1++;
        while(n1 < n2 || n1 != n2){
            if(parar == 1){
                break;
            }
            if(n1%2!=0){
                total += n1;
            }
            n1++;
        }
        printf("%i\n", total);
    }
}