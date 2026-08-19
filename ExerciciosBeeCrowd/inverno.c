#include <stdio.h>

int main(){
    int dia1, dia2,dia3,humor;
    scanf("%i %i %i", &dia1, &dia2, &dia3);
        if(dia2 < dia1 && dia2 <= dia3){
            humor = 1;
        }else if(dia2 > dia1 && dia3 <=dia2){
            humor = 0;
        }else if(dia2 > dia1 && dia3 > dia2 && (dia3 - dia2) < (dia2 - dia1)){
            humor = 0;
        }else if(dia1 < dia2 && dia2 < dia3 && (dia3 - dia2)>=(dia2 - dia1)){
            humor = 1;
        }else if(dia2 < dia1 & dia3 < dia2 && (dia2 - dia3) < (dia1 - dia2)){
            humor = 1;
        }else if(dia2 < dia1 && dia3 < dia2 && (dia2 - dia3) >= (dia1 - dia2)){
            humor = 0;
        }else if(dia1 == dia2 & dia2 < dia3){
            humor = 1;
        }else{
            humor = 0;
        }
    if(humor == 1){
        puts(":)");
    }else{
        puts(":(");
    }

}