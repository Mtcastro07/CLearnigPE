#include <stdio.h>

int tres(long long n){
    while(n >0){
        if(n%10 == 3){
            return 1;
        }else n /= 10;
    }
    return 0;
}

int main(){

    long long p1 = 1;
    long long p2 = 2;
    long long atual = 0;
    int posicoes;
    int n = 0;
   while (scanf("%d", &posicoes) != EOF){
    while(posicoes != n){
       
            atual = p1 + p2;
            p1 = p2;
            p2 = atual;
             if(atual % 3 == 0 || tres(atual)==1){
            n++;
        }
        
    }
    printf("%lli\n", atual);
}
    return 0;
}