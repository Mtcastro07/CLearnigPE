#include <stdio.h>

float comm(int n, int k,int p,int r1, int r2, int r3){
    if(n > 1){
        r1 *= n;
        n--;
        return comm(n,k,p,r1,r2,r3);
    }
    if(k > 1){
        r2 *= k;
        k--;
        return comm(n,k,p,r1,r2,r3);
    }
    if(p > 1){
        r3 *= p;
        p--;
        return comm(n,k,p,r1,r2,r3);
    }
    if(k == 1 && n == 1){
        return r1/(r3*r2);
    }
}

int main(){
    int n1 = 4;
    int n2 = 3;
    int k = n1 - n2;
    printf("%f", comm(n1,k,n2, 1,1,1));
}