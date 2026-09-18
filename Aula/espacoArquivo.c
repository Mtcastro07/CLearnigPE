#include <stdio.h>
#include <stdlib.h>

float converterByteMega(float n) { return n / 1048546.0; }

void relatorioUso(char *arquivo, char *arquivo_saida) {
  FILE *fe = fopen(arquivo, "r");
  FILE *fs = fopen(arquivo_saida, "w");

  float totalMega = 0;

  char **usuarios = malloc(1*sizeof(char*));
  usuarios[0] = malloc(50*sizeof(char));
  float *bytesUsuarios = malloc(1*sizeof(float));
  float *megaUsuarios = malloc(1*sizeof(float));

  int i = 0;
  while (fscanf(fe, "%s %f", usuarios[i], &bytesUsuarios[i]) == 2) {
    megaUsuarios[i] = converterByteMega(bytesUsuarios[i]);
    totalMega += converterByteMega(bytesUsuarios[i]);
    i++;
    usuarios = realloc(usuarios, (i + 1) * sizeof(char*));
    usuarios[i] = malloc(50*sizeof(char));
    bytesUsuarios = realloc(bytesUsuarios, (1 + i) * sizeof(float));
    megaUsuarios = realloc(megaUsuarios, (i + 1) * sizeof(float));
  }
  fprintf(fs, "ACME Inc.       Uso do espaco em disco pelos usuarios\n");
  fprintf(fs, "-----------------------------------------------------\n");
  fprintf(fs, "Nr. Usuario     Espaco utilizado        porcentagem de uso\n");
  for (int j = 0; j < i; j++) {
    float porcentagem = (100 * megaUsuarios[j]) / totalMega;
    fprintf(fs, "%i %s      %0.2f MB       %0.2f porcento\n", j + 1, usuarios[j],
            megaUsuarios[j], porcentagem);
  }
  
  fclose(fs);
  fclose(fe);
}

int main() {
  char *arquivo = "entradaDados.txt";
  char *arquivo_saida = "saidaDados.txt";
  relatorioUso(arquivo, arquivo_saida);
}
