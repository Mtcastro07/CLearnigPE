#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenStr(char *palavra) {
  while (*palavra != '\0') {
    return 1 + lenStr(palavra + 1);
  }
  return 0;
}

int ocorrencias(char *arquivo_entrada) {
  FILE *fe = fopen(arquivo_entrada, "r");

  char frase[100];
  char palavras[100][100];
  int n = 0;
  char *palavra = malloc((n * sizeof(char)));
  int i = 0;
  int j = 0;

  while (fscanf(fe, "%s", frase) == 1) {
    int len = lenStr(frase);

    for (int k = 0; k < len; k++) {
      if (isalpha(frase[k])) {
        n++;
        palavra = realloc(palavra, n * sizeof(char));
        palavra[i] = frase[k];
        i++;
      } else if (i > 0) {
        palavra[i] = '\0';
        strcpy(palavras[j], palavra);
        j++;
        free(palavra);
        palavra = NULL;
        i = 0;
      }
    }
  }
  int maior = -10000;
  int ocorrencias = 0;
  int indice = 0;
  for (int k = 0; k < j + 1; k++) {
    for (int l = 0; l < j + 1; l++) {
      if ((strcmp(palavras[k], palavras[l]) == 0) && k != l) {
        ocorrencias++;
        break;
      }
    }
    if (ocorrencias > maior) {
      maior = ocorrencias;
      indice = k;
    }
  }
  printf("O numero de ocorrencias seria %i cuja palavra %s\n", ocorrencias,
         palavras[indice]);
}

int main() {
  char *entrada = "entrada2.txt";
  ocorrencias(entrada);
}
