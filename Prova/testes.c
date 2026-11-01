#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mesma_palavra(char *palavra1, char *palavra2, int *result) {
  int len1 = strlen(palavra1);
  int len2 = strlen(palavra2);
  if (len1 != len2) {
    *result = 0;
  } else {
    *result = 1;
    for (int i = 0; i < len1; i++) {
      if (palavra1[i] != palavra2[i]) {
        *result = 0;
      }
    }
  }
}

void funct(char *algo){
    int len = strlen(algo);
    static 
}


void mesma_palavras(char *arquivo) {
  FILE *fe = fopen(arquivo, "r");
  char **palavras = malloc(1000 * sizeof(char *));
  palavras[0] = malloc(100 * sizeof(char));
  int indice = 0, ocorrencias = 0;
  int maiorR = -100000000;
  char *palavraR = malloc(100 * sizeof(char));
  char *frase = malloc(200 * sizeof(char));
  while (fscanf(fe, " %[^\n]", frase) > 0) {
    int b = 0, a = 0;
    while (frase[b] != '\0') {
      if (frase[b] != ' ') {
        if (frase[b] != '.' && frase[b] != ',' && frase[b] != '!' &&
            frase[b] != '?' && frase[b] != ';' && frase[b] != ':') {
          palavras[indice][a] = tolower((unsigned char)frase[b]);
          a++;
        }
        b++;
      } else {
        if (a > 0) {
          palavras[indice][a] = '\0';
          a = 0;
          indice++;
          palavras[indice] = malloc(100 * sizeof(char));
        }
        b++;
      }
    }
    if (a > 0) {
      palavras[indice][a] = '\0';
      indice++;
      palavras[indice] = malloc(100 * sizeof(char));
    }
  }
  int *resultado = malloc(sizeof(int));
  for (int i = 0; i < indice; i++) {
    ocorrencias = 0;
    for (int j = 0; j < indice; j++) {
      if (j != i) {
        mesma_palavra(palavras[i], palavras[j], resultado);
        if (*resultado == 1) {
          ocorrencias++;
        }
      }
    }
    if (ocorrencias > maiorR) {
      maiorR = ocorrencias;
      strcpy(palavraR, palavras[i]);
    }
  }
  printf(
      "A palavra que mais se repete seria %s, com o total de %i ocorrencias\n",
      palavraR, maiorR);
  for (int i = 0; i < indice; i++) {
    free(palavras[i]);
  }
  free(palavras);
  free(frase);
  free(palavraR);
  free(resultado);
  fclose(fe);
}

int main() {
  char *arquivo = "frases.txt";
  mesma_palavras(arquivo);
}
