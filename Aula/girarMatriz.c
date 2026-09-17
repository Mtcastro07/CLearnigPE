#include <stdio.h>
#include <stdlib.h>

void girarMatriz(int l, int c, int *m) {
  for (int i = 0; i < l; i++) {
    for (int j = 0 + i; j < (c - i); j++) {
      if (i != j) {
        int aux = m[i * c + j];
        m[i * c + j] = m[j * c + i];
        m[j * c + i] = aux;
      }
    }
  }

  for(int k=0;k<l;k++){
      for (int i=3;i>0;i--){
          for(int j=(3 - i);j>0;j--){
              if (i != j) {
                int aux = m[i * c + j];
                m[i * c + j] = m[j * c + i];
                m[j * c + i] = aux;
              }
          }
      }
  }
  
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf("%i ", m[i * c + j]);
    }
    puts("");
  }
}

int main() {
  int linha = 3;
  int coluna = 3;
  int *matriz = malloc(linha * coluna * sizeof(int));
  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      scanf("%i", &matriz[i * coluna + j]);
    }
  }
  girarMatriz(linha, coluna, matriz);
}
