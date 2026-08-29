#include <stdio.h>

int somas(int n1, int n2){
    if(n2 > 0){
        n1++;
        n2--;
        return somas(n1,n2);
    }else{
        return n1;
    }
}

int main(){
    int n1 = 3;
    int n2 = 2;
    printf("%i", somas(n1,n2));
}