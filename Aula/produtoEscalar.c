#include <stdio.h>
#include <stdlib.h>
int main() {
  int *escalares = malloc(5 * sizeof(int));
  int *numeros = malloc(5 * sizeof(int));
  int produtoEscalar = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%i", (escalares + i));
  }
  for (int i = 0; i < 5; i++) {
    scanf("%i", numeros + i);
  }

  for (int i = 0; i < 5; i++) {
    produtoEscalar += (*(escalares + i)) * (*(numeros + i));
  }

  printf("%i", produtoEscalar);
  free(escalares);
  free(numeros);
}
