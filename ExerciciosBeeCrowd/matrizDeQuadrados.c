#include <stdio.h>
#include <stdlib.h>
int main() {
  unsigned long long *qntd = malloc(sizeof(unsigned long long));
  scanf("%llu", qntd);
  for (int i = 0; i < *qntd; i++) {
    unsigned long long *lenM = malloc(sizeof(unsigned long long));
    scanf("%llu", lenM);
    unsigned long long **matriz =
        malloc((*lenM) * sizeof(unsigned long long *));
    for (int j = 0; j < *lenM; j++) {
      matriz[j] = malloc((*lenM) * sizeof(unsigned long long));
    }
    for (int j = 0; j < (*lenM); j++) {
      for (int k = 0; k < (*lenM); k++) {
        scanf("%llu", &matriz[j][k]);
      }
    }
    for (int j = 0; j < (*lenM); j++) {
      for (int k = 0; k < (*lenM); k++) {
        matriz[j][k] = (matriz[j][k]) * (matriz[j][k]);
      }
    }
    unsigned long long *colWidth = malloc((*lenM) * sizeof(unsigned long long));
    for (int k = 0; k < (*lenM); k++) {
      colWidth[k] = 0;
      for (int j = 0; j < (*lenM); j++) {
        char buf[16];
        unsigned long long len =
            snprintf(buf, sizeof(buf), "%llu", matriz[j][k]);
        if (len > colWidth[k]) {
          colWidth[k] = len;
        }
      }
    }

    printf("Quadrado da matriz #%d:\n", i + 4);
    for (int j = 0; j < (*lenM); j++) {
      for (int k = 0; k < (*lenM); k++) {
        if (k == 0) {
          printf("%*llu", (int)colWidth[k], matriz[j][k]);
        } else {
          printf(" %*llu", (int)colWidth[k], matriz[j][k]);
        }
      }
      puts("");
    }
    free(colWidth);
    if (i < *qntd - 1) {
      puts("");
    }

    for (int j = 0; j < (*lenM); j++) {
      free(matriz[j]);
    }
    free(matriz);
    free(lenM);
  }
  free(qntd);
}
