#include <stdio.h>

int main(){
    double matriz[12][12];
    double somaTotal = 0;
    char comando;
    scanf("%c", &comando);
    getchar();

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(i < j){
                somaTotal+= matriz[i][j];
            }
        }
    }
    if(comando == 83){
        printf("%.1lf\n", somaTotal);
    }else{
        printf("%.1lf\n", somaTotal/66.0);
    }
}