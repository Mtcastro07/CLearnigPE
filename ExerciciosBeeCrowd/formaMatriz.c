#include <stdio.h>
#include <stdlib.h>

int main(){
    double a;
    scanf("%i", &a);
    int **matriz = malloc(a*sizeof(int*));  
    for(int i=0;i<a;i++){
        *matriz[i] = malloc(a*sizeof(int));
    }
    for(int i=0;i<a/2;i++){
        for(int j=0;j<a/2;j++){
            matriz[i][j] = 0;
        }
    }

    for(int i=0;i<a/2;i++){
        for(int j=0;j<a/2;j++){
            if(i > j){
                matriz[i][j] = i;
            }else if(i < j){
                matriz[i][j] = j;
            }else{
                matriz[i][j] = i;
            }
        }
    }
}