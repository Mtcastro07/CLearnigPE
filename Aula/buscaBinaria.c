    #include <stdio.h>

    int buscaBinaria(int n, int v[], int tamanho){
        int ultimo = tamanho - 1;
        int primeiro = -1;
        while(primeiro < ultimo){
            int meio = (primeiro + ultimo)/2;
            if(v[meio] == n){
                return meio;
            }else if(v[meio] < n){
                primeiro = meio;
            }else{
                ultimo = meio;
            }
        }
        return -1;
        
    }

    int main(){
        int vet[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
        int len = sizeof(vet)/sizeof(vet[0]);
        int result = buscaBinaria(8, vet, len); 
        printf("%i", result+1);
        return 0;
    } 