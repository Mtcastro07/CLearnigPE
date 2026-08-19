#include <stdio.h>
#include <math.h>

// int contarDigitos(int n){
//     int nDigitos = 0;

//     while(n > 0){
//         nDigitos++;
//         n /= 10;
//     }
//     return nDigitos;
// }

int main(){
    int qntd;
    int base;
    int exp;

    scanf("%i", &qntd);

    for(int i=0;i<qntd;i++){
        scanf("%i %i", &base, &exp);
        int numeroFinal = (int)(exp*log10(base)) + 1;
        printf("%i\n", numeroFinal);
    }
    return 0;

}