#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int qntdCaracteres(char *frase) {
  if (*frase != '\0') {
    return 1 + qntdCaracteres(frase + 1);
  } else {
    return 0;
  }
}

void informacoesArquivo(char *arquivo) {
  FILE *fe = fopen(arquivo, "r");
  char frase[256];
  int linhas = 0;

  while (fgets(frase, sizeof(frase), fe) != NULL) {
    int len = qntdCaracteres(frase);
    int palavras = 0;
    int espacos_branco = 0;
    int vogais = 0;
    int consoantes = 0;
    linhas++;
    for (int i = 0; i < len; i++) {
      if (frase[i] == 32) {
        espacos_branco++;
      }
      if (frase[i] == 32 && i != 0 && i != (len - 1)) {
        palavras++;
      }
      if (frase[i] == 65 || frase[i] == 97 || frase[i] == 69 ||
          frase[i] == 101 || frase[i] == 73 || frase[i] == 105 ||
          frase[i] == 79 || frase[i] == 111 || frase[i] == 85 ||
          frase[i] == 117) {
        vogais++;
      } else {
        if (frase[i] != 32) {
          consoantes++;
        }
      }
    }
    printf("A linha %i possui: %i palavras, %i consoantes, %i vogais, %i "
           "espacos em branco, e temos no total %i linha(s)\n",
           linhas, palavras +1, consoantes, vogais, espacos_branco, linhas);
  }
  fclose(fe);
}

int main() {
  char *arquivo = "infosArquivo.txt";
  informacoesArquivo(arquivo);
}
