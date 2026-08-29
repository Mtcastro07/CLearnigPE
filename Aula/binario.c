#include <stdio.h>
#include <math.h>

int binario(int n, int v[], int i, int exp){
    
    if(n / 2 >= 1){
        v[i] = n%2;
        n /= 2;
        i++;
        exp++;
        return binario(n, v,i, exp);
    }else{
        v[i] = n%2;
        for(int j=i;j>=0;j--){
            printf("%i ", v[j]);
        }
        return 0;
    }
}

int main(){
    int n = 220;
    int v[30];
    binario(n,v,0,0);
  
}