#include <stdio.h>

int intercalar_vetor(int v1[], int v2[]){
    int len1 = sizeof(v1)/sizeof(v1[0]);
    int len2 = sizeof(v2)/sizeof(v2[0]);
    int menorlen;

    int lenTotal = len1 + len2;
    int lenAux = lenTotal;
    int vetR[lenTotal];
    if(len1 < len2){
         menorlen = len1;
    }else if(len2 < len1){
         menorlen = len2;
    }else{
         menorlen = len1;
    }


    int i=0;
    while(menorlen > 0){
        if(i%2==1){
            vetR[i] == v1[i];
        }else {
            vetR[i] == v2[i];
        }
        i++;
        menorlen--;
        lenTotal--;
    }

    printf("%i %i", menorlen, lenTotal);

    if(lenTotal != 0){
        if(len1 == 0){
            while(lenTotal > 0){
                i++;
                
            }
        }
    }

    return 0;
}