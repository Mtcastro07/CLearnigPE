#include <stdio.h>
#include <stdlib.h>

int contarLetras(char *palavra) {
  
  if (*palavra != '\0') {
    return 1 + contarLetras(palavra + 1);
  } else {
    return 0;
  }
}

void comandosStrings(char *arquivo_entrada, char *arquivo_saida) {
  FILE *fe = fopen(arquivo_entrada, "r");
  FILE *fs = fopen(arquivo_saida, "w");

  char comando;
  char *palavra = malloc(10 * sizeof(char));

  while (fscanf(fe,"%c %s", &comando, palavra) == 2) {
    int len = contarLetras(palavra);
    if (comando == 73) {
      for (int i = 0; i < len / 2; i++) {
        int aux = palavra[i];
        palavra[i] = palavra[len - 2 - i];
        palavra[len - 2 - i] = aux;
      }
    } else {
      for (int i = 0; i < len; i++) {
        palavra[i] -= 32;
      }
    }
    fprintf(fs, "%s\n", palavra);
  }
  fclose(fe);
  fclose(fs);
}

int main() {
  char *entrada = "entrada.txt";
  char *saida = "saida.txt";
  comandosStrings(entrada, saida);
}
