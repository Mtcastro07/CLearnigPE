#include <stdio.h>
#include <stdlib.h>
int main() {
  int *vetor = malloc(50 * sizeof(int));
  for (int i = 0; i < 50; i++) {
    *(vetor + i) = (i + 5 * i) % (i + 1);
    printf("%i", *(vetor + i));
  }
}
