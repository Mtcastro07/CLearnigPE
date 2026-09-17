#include <stdio.h>
#include <stdlib.h>

int preencherVetor(int *v, int len) {
  if (len > 0) {
    scanf("%i", &*v);
    getchar();
    len--;
    return preencherVetor(v + 1, len);
  } else {
    return 0;
  }
}

void encontrarExtremos(int *vetor, int tamanho, int *maior, int *menor) {
  if (tamanho > 0) {
    if (*vetor > *maior) {
      *maior = *vetor;
    }
    if (*vetor < *menor) {
      *menor = *vetor;
    }
    tamanho--;
    return encontrarExtremos(vetor + 1, tamanho, maior, menor);

  } else {
    printf("min = %i, max = %i", *menor, *maior);
  }
}

int main() {
  int tamanho;
  scanf("%i", &tamanho);
  int *vetor = malloc(tamanho * sizeof(int));
  int *maior, *menor;
  int menorPossivel = -10000;
  int maiorPossivel = 10000;
  maior = &menorPossivel;
  menor = &maiorPossivel;
  preencherVetor(vetor, tamanho);
  encontrarExtremos(vetor, tamanho, maior, menor);
}
