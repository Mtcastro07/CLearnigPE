#include <stdio.h>

int recursiva(int n){
    if(n<0){
        return -1; 
    }else
    printf("%i",  recursiva((n-1)+(n-2)+(n-3)));
        return recursiva((n-1)+(n-2)+(n-3));
}

int main(){
    int n = 100;
    printf("%i", recursiva(n));
}