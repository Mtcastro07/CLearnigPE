#include <stdio.h>
#include <stdlib.h>

void ibope(char *arquivo) {
  FILE *fe = fopen(arquivo, "r");

  int i = 0;
  float nFumantes = 0;
  float nMulheres = 0;
  float nHomens = 0;
  float fumantesH40 = 0;
  float fumantesM40 = 0;
  char **generos = malloc(sizeof(char));
  char *fumantes = malloc(1 * sizeof(char));
  float *idades = malloc(sizeof(int));
  generos[i] = malloc(20 * sizeof(char *));

  while (fscanf(fe, "%s %f %c", generos[i], &idades[i], &fumantes[i]) == 3) {
    if (fumantes[i] == 83) {
      nFumantes++;
    }
    if (generos[i][0] == 70) {
      nMulheres++;
      if (idades[i] > 40 && fumantes[i] == 83) {
        fumantesM40++;
      }
    } else {
      nHomens++;
      if (idades[i] < 40 && fumantes[i] != 83) {
        fumantesH40++;
      }
    }
    i++;
    fumantes = realloc(fumantes, (i + 1) * sizeof(char));
    idades = realloc(idades, (i + 1) * sizeof(float));
    generos = realloc(generos, (i + 1) * sizeof(char *));
    generos[i] = malloc(20 * sizeof(char));
  }
  float pFumantes = 100 * (nFumantes / (i + 1));
  float pNHFumantes = (fumantesH40 / nHomens) * 100;
  float pMFumantes = (fumantesM40 / nMulheres) * 100;

  printf("%0.2f porcento de fumantes no total, com %0.2f porcento de homens que nao "
         "fumam com menos de 40 anos e %0.2f porcento de mulheres que fumam "
         "estando acima dos 40 anos",
         pFumantes, pNHFumantes, pMFumantes);
}

int main(){
    char *arquivo = "dadosIbope.txt";
    ibope(arquivo);
}