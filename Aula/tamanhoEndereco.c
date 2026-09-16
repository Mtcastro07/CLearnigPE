#include <stdio.h>
#include <stdlib.h>

int comparacaoEnderecos(int *a, int *b){
    if(a > b){
        printf("%p", a);
    }else{
        printf("%p", b);
    }
}

int main(){
    int a = 4;
    int *p;
    p = &a;
    int b = 6;
    int *p2;
    p2 = &b;
    comparacaoEnderecos(p,p2);
}