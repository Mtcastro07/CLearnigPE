#include <stdio.h>
#include <stdlib.h>

int pontos(int *mat, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      int postoL = 1;
      int postoC = 1;
      for (int k = 0; k < m; k++) {
        if (mat[i * m + j] > mat[i * m + k]) {
          postoL = 0;
          break;
        }
      }
      for (int k = 0; k < n; k++) {
        if (mat[i * m + j] < mat[k * m + j]) {
          postoC = 0;
          break;
        }
      }
      if (postoL == postoC && postoL == 1) {
        printf("O número %i é sela na posicao: %i %i\n", mat[i * m + j], i, j);
      }
    }
  }
  return 0;
}

int main() {
  int coluna;
  int linha;
  scanf("%i %i", &coluna, &linha);
  int *matriz = malloc(linha * coluna * sizeof(int));
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      scanf("%i", &matriz[i * coluna + j]);
    }
  }
  pontos(matriz, linha, coluna);
}
