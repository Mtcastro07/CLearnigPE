#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dadosArquivo(char *arquivo) {
  FILE *fe = fopen(arquivo, "r");
  int idades[100];
  char nomes[100][256];
  char generos[100][256];
  float pesos[100];
  float alturas[100];
  char escolaridades[100][256];
  char olhos[100][256];
  int i = 0;
  int somaIdades = 0;
  float somaAlturas = 0.0;
  int mulheresVerdes = 0;
  int pessoas = 0;
  float pessoasf = 0;

  while (fscanf(fe, "%s %s %f %f %i %s %s", nomes[i], generos[i], &alturas[i],
                &pesos[i], &idades[i], olhos[i], escolaridades[i]) == 7) {
    if (olhos[i][0] == 118 && idades[i] > 50 && generos[i][0] == 102) {
      mulheresVerdes++;
    }
    somaIdades += idades[i];
    somaAlturas += alturas[i];
    pessoas++;
    pessoasf++;
  }

  int mediaIdades = somaIdades / pessoas;
  float mediaAlturas = somaAlturas / pessoasf;
  int maisVelhas = 0;

  for (int i = 0; i < pessoas; i++) {
    if (idades[i] > mediaIdades) {
      maisVelhas++;
    }
  }
  int porcentagemPessoas = (100 * maisVelhas) / pessoas;
  printf("A media das idades: %i, e alturas: %f, há %i porcento de pessoas com idade "
         "maior que media e %i mulheres respeitando as condicoes.",
         mediaIdades, mediaAlturas, porcentagemPessoas, mulheresVerdes);

  fclose(fe);
}

int main() {
  char *arquivo = "dados.txt";
  dadosArquivo(arquivo);
}
