#include <stdio.h>
#include <stdlib.h>

int maior(int *v, int len, int greatest) {
  if (len > 0) {
    if (*v > greatest) {
      greatest = *v;
    }
      return maior(v + 1, len - 1, greatest);
  }else{
      return greatest;
  }
}

void maiorAparicoes(int *v, int len, int maior) {
  static int aparicoes = 0;
  if (len > 0) {
    if (*v == maior) {
      aparicoes++;
    }
      return maiorAparicoes(v + 1, len - 1, maior);
  } else {
    printf("O maior numero seria:%i e cujo numero de aparicoes seria: %i",
           maior, aparicoes);
  }
}

int main() {
  int *vetor = malloc(5 * sizeof(int));
  int len = 5;
  for (int i = 0; i < len; i++) {
    scanf("%i", &vetor[i]);
  }
  int biggest = maior(vetor, len, -10000);
  maiorAparicoes(vetor, len, biggest);
}
