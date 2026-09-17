#include <stdio.h>
#include <stdlib.h>

void preecherMatriz(int **matriz, int n) {
  int preecher = 1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      for (int j = i; j < n; j++) {
        matriz[i][j] = preecher;
        if (j != n - 1) {
          preecher++;
        }
      }
    } else {
      for (int j = n; j >= i; j--) {
        matriz[i][j] = preecher;
        preecher++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%i ", matriz[i][j]);
    }
    puts("");
  }
}

int main() {
  int n = 3;
  int **m = malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    m[i] = malloc(n * sizeof(int));
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      m[i][j] = 0;
    }
  }
  preecherMatriz(m, n);
}
