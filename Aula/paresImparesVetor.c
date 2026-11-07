#include <stdio.h>
#include <stdlib.h>
int main() {
  int *vetor1 = malloc(10 * sizeof(int));
  int *vetor2 = malloc(10 * sizeof(int));
  int *vetorR = malloc(20 * sizeof(int));

  for (int i = 0; i < 10; i++) {
    scanf("%i", (vetor1 + i));
  }
  for (int i = 0; i < 10; i++) {
    scanf("%i", (vetor2 + i));
  }
  int j = 0;
  int k = 0;
  for (int i = 0; i < 20; i++) {
    if (i % 2 == 0) {
      *(vetorR + i) = *(vetor1 + j);
      j++;
    } else {
      *(vetorR + i) = *(vetor2 + k);
      k++;
    }
  }
  for (int i = 0; i < 20; i++) {
    printf("%i ", *(vetorR + i));
  }
}
