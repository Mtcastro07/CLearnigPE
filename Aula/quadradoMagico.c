#include <stdio.h>
#include <stdlib.h>

int somaLinhas(int l, int c, int **m, int soma){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            soma+= m[i][j];
        }
    }
    return soma/l;
}

int somaColuna(int l, int c, int **m, int soma){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++){
            soma+= m[j][i];
        }
    }
    return soma/c;
}

int somaDiagonalPrincipal(int l, int c, int **m, int soma){
    for(int i=0;i<l;i++){
        soma += m[i][i];
    }
    return soma;
}

int somaDiagonalSecundaria(int l, int c, int **m, int soma){
    for(int i=0; i<l;i++){
        int coluna = c - 1 - i;
        soma += m[i][coluna];
    }
    return soma;
}

int main(){
    int linhas = 3;
    int colunas = 3;
    int **matriz = malloc(linhas * sizeof(int*));
    for(int i=0;i<linhas;i++){
        matriz[i] = malloc(colunas * sizeof(int));
    }

    for(int i=0;i<linhas;i++){
        for(int j=0;j<colunas;j++){
            int a;
            scanf("%i", &a);
            matriz[i][j] = a;
        }
    }
    int somaTotal = somaColuna(linhas,colunas, matriz,0) + somaLinhas(linhas, colunas, matriz,0) + somaDiagonalPrincipal(linhas,colunas,matriz,0) + somaDiagonalSecundaria(linhas, colunas, matriz,0);
    if(somaTotal%(somaColuna(linhas,colunas,matriz,0)) == 0){
        printf("E quadrado magico");
    }else{
        printf("Nao e quadrado magico");
    }
    
}