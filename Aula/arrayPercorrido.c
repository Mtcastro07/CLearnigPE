#include <stdio.h>
#include <stdlib.h>

void percorrer(int *v, int valor) {
  static int n = 0;
  if (n < 5) {
    n++;
    *v = valor;
    return percorrer(v + 1, valor);
  } else {
    v = v - 5;
    for (int i = 0; i < 5; i++) {
      printf("%i\n", *(v + i));
    }
  }
}

int main() {
  int *vetor = malloc(5 * sizeof(int));
  int valor = 2;
  percorrer(vetor, valor);
  free(vetor);
}
