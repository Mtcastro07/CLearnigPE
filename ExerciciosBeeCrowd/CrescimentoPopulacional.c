#include <stdio.h>

int main(){
    int PA;
    int PB;
    float G1;
    float G2;

    int times;
    scanf("%i", &times);

    for(int i=0;i<times;i++){
        scanf("%i %i %f %f", &PA, &PB, &G1, &G2);
        int anos = 0;
        
        while(PA <= PB && anos <101){

            PA += PA*((G1/100));
            PB += PB*((G2/100));
            anos += 1;
        }
        if( anos <= 100){
        printf("%i anos.\n", anos);
        }else{
            puts("Mais de 1 seculo.");
        }        

    }
    return 0;
}