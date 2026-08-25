#include <stdio.h>

int contagemRLE(int v[]){
    int contagem = 1;
    int nAtual = v[0];
    int len = sizeof(v)/sizeof(v[0]);
    for(int i=0;i<len-1;i++){
        if(v[i]!=v[i+1]){
            contagem+=1;
            nAtual = v[i+1];
        }
    }
    return contagem*2;
}

int main(){
    int v[] = {1,2,3,5,5,5,7,7,7,7,7,2,2,2,0,0,0,0,0,9,9,9,12,12,12,4,4};
    int total = sizeof(v)/sizeof(v[0]);
    int totalR = contagemRLE(v);
    int vR[totalR];
    int contagemAtual = 1;
    int nAtual = v[0];
    int j = 0;
    for(int i=0;i<total-1;i++){
        if(v[i] == v[i+1]){
            contagemAtual+=1;
        }else{
            nAtual = v[i];
            vR[j] == nAtual;
            vR[j+1]
            contagemAtual = 1;

        }
    }

}