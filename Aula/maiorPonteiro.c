#include <stdio.h>

void maior(int *p1,int *p2){
    if(*p1 > *p2){
        printf("O maior valor seria do %i e o menor valor seria de %i", *p1, *p2);
    }else{

        printf("O maior valor seria do %i e o menor valor seria de %i",*p2, *p1);
    }
}

int main(){
    int a = 10;
    int b = 15;
    int *p1,*p2;
    p1 = &a;
    p2 = &b;
    maior(p1,p2);
}