#include <stdio.h>

int contarNumeros(int v[], int len){
    int contar = 1;
    int termoAtual = v[0];
    
    for(int i=1;i<len;i++){
        if(termoAtual != v[i]){
            contar++;
            termoAtual = v[i];
        }
    }
    return contar*2;
}

int RLE(int v[], int len){
    int termosResposta = contarNumeros(v, len);
    int vetorR[termosResposta];
    int termoAtual = v[0];
   
    int contar = 0;
    int j = 0;
    for(int i=0;i<len;i++){
        if(v[i] == termoAtual){
            contar++;
        }else{
            vetorR[j] = termoAtual;
            vetorR[j+1] = contar;
            j += 2;
            contar = 1;
            termoAtual = v[i];
        }

    }
    vetorR[j] = termoAtual;
    vetorR[j+1] = contar;
    for(int i=0;i<termosResposta;i++){
        printf("%i ", vetorR[i]);
    }
    return 0;
}

int main(){

    int vetor[] = {1,2,3,5,5,5,7,7,7,7,7,2,2,2,0,0,0,0,0,9,9,9,12,12,12,4,4};
    int len = sizeof(vetor)/sizeof(vetor[0]);
    RLE(vetor,len);

    return 0;
}