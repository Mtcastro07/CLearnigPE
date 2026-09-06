#include <stdio.h>

int mdc(int x, int y){
    if(y <= x && x % y == 0){
        return y;
    }
    if(x < y){
        return mdc(y,x);
    }
    return mdc(y,x%y);
}

int main(){
    int n1 = 10;
    int n2 = 20;
    printf("%i", mdc(n1,n2));
}