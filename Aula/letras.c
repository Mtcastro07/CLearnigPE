#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {
  FILE *fe = fopen("entradaLetras.txt", "r");
  FILE *fs = fopen("saidaLetras.txt", "w");

  int k;
  char c;
  int i = 0;
  scanf("%i", &k);

  while (fscanf(fe, "%c", &c) == 1) {
    if (c + k > 128) {
      c = (c + k) - 127;
    } else {
      c = +k;
    }
    fprintf(fs, "%c", c);
  }
  fclose(fs);
  fclose(fe);
}
