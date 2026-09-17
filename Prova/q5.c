#include <stdio.h>
#include <stdlib.h>

int maxSubmatriz(int L, int C, int M, int N, int **matriz) {
  int maior = -100000;
  for (int i = 0; i < L - M + 1; i++) {
    for (int j = 0; j < C - N + 1; j++) {
      int *soma = malloc(sizeof(int));
      for (int k = 0 + i; k < M + i; k++) {
        for (int l = 0 + j; l < N + j; l++) {
          *soma += matriz[k][l];
          printf("%i ", matriz[k][l]);
        }
        puts("");
      }
      if (*soma > maior) {
        maior = *soma;
      }
      free(soma);
    }
  }
  return maior;
}

int main() {
  int colunas;
  int linhas;
  int subcolunas;
  int sublinhas;
  scanf("%i %i %i %i", &colunas, &linhas, &subcolunas, &sublinhas);
  int **m = malloc(linhas * sizeof(int));
  for (int i = 0; i < colunas; i++) {
    m[i] = malloc(colunas * sizeof(int));
  }
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      scanf("%i", &m[i][j]);
    }
  }
  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      printf("%i ", m[i][j]);
    }
    puts("");
  }
  int resultado = maxSubmatriz(linhas, colunas, sublinhas, subcolunas, m);
  printf("%i\n", resultado);
}
