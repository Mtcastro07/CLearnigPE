#include <stdio.h>
#include <stdlib.h>
int main() {
  int *vetor = malloc(10 * sizeof(int));
  for (int i = 0; i < 10; i++) {
    scanf("%i", (vetor + i));
  }
  int *vetorImpares = malloc(sizeof(int));
  for (int i = 0; i < 10; i++) {
    if (*(vetor + i) % 2 != 0) {
      vetorImpares[i] = *(vetor + i);
    } else {
      vetorImpares[i] = 0;
    }
    vetorImpares = realloc(vetorImpares, (i + 1) * sizeof(int));
  }
  for (int i = 0; i < 10; i++) {
    printf("%i %i\n", vetorImpares[i], vetor[i]);
  }
}
