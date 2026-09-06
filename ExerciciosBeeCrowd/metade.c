#include <stdio.h>

int main(){
    double matriz[12][12];
    double somaTotal = 0;
    char operacao;

    scanf("%c", &operacao);
    getchar();
    for(int i=0; i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    for(int i=1;i<=5;i++){
        for(int j=0;i>j;j++){
            somaTotal+=matriz[i][11 - j];
        }
    }
     for(int i=6;i<=10;i++){
        for(int j=i+1;j<=11;j++){
            somaTotal+=matriz[i][j];
        }
    }
    if(operacao == 83){
        printf("%.1lf\n", somaTotal);
    }else{
        printf("%.1lf\n", somaTotal/30.0);
    }
}