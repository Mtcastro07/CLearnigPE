#include <stdio.h>
#include <stdlib.h>

void combinacoes(char *letras, int k, char *result, int i) {

  if (k == i) {
    result[i] = '\0';
    printf("%s\n", result);
  } else {
    int j = 0;
    while (letras[j] != '\0') {
      result[i] = letras[j];
      j++;
      combinacoes(letras, k, result, i + 1);
    }
  }
}

int main() {
  char palavras[] = "abc";
  int k = 2;
  char *results = malloc(k * sizeof(char));
  combinacoes(palavras, k, results, 0);
  free(results);
}
