#include <stdio.h>
#include <stdlib.h>

void girarMatriz(int l, int c, int *m) {
  for (int i = 0; i < l; i++) {
    for (int j = i + 1; j < c; j++) {
      int aux = m[i * c + j];
      m[i * c + j] = m[j * c + i];
      m[j * c + i] = aux;
    }
  }
  for(int i=0;i<l;i++){
      for(int j=0;j<c/2;j++){
          int aux = m[i*c + j];
          m[i*c+j] = m[i*c + (c - j - 1)];
          m[i*c + (c - j - 1)] = aux;
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
  int a = 3;
  int b = 3;
  int *matriz = malloc(a * b * sizeof(int));
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      scanf("%i", &matriz[i * b + j]);
    }
  }
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) {
      printf("%i ", matriz[i * b + j]);
    }
    puts("");
  }
  puts("");
  girarMatriz(a, b, matriz);
}
