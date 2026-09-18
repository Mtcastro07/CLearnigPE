#include <stdio.h>
#include <stdlib.h>

void temps(char *arquivo, char *arquivo_saida) {
  FILE *fe = fopen(arquivo, "r");
  FILE *fs = fopen(arquivo_saida, "w");

  float *temps = malloc(121 * sizeof(float));
  int i = 0;
  float menor = 100000000000000.0;
  float maior = -10000000000000.0;
  float somaTemps = 0;
  float totalTemps = 0;

  while (fscanf(fe, "%f", &temps[i]) == 1) {
    somaTemps += temps[i];
    if (temps[i] > maior) {
      maior = temps[i];
    }
    if (temps[i] < menor) {
      menor = temps[i];
    }
    i++;
    totalTemps++;
    temps = realloc(temps, (i + 1) * sizeof(float));
  }
  float media = (somaTemps / totalTemps);
  float nMenoresM = 0;
  float nMaioresM = 0;
  for (int j = 0; j < i; j++) {
    if (temps[j] < media) {
      nMenoresM++;
    }
    if (media < temps[j]) {
      nMaioresM++;
    }
  }
  fprintf(fs,
          "A menor temperatura ocorrida: %f\nA maior temperatura ocorrida: "
          "%f\nA temperatura media: %f\nNumero de dias nos quais a "
          "temperatura foi inferior a temperatura media: %f\nNumero de dias "
          "nos quais a temperatura foi superior a temperatura media: %f",
          menor, maior, media, nMenoresM, nMaioresM);
  fclose(fs);
  fclose(fe);
}

int main() {
  char *arquivo_saida = "tempsSaida.txt";
  char *arquivo_entrada = "temps.txt";
  temps(arquivo_entrada, arquivo_saida);
}
gi