#include <stdio.h>
#include <stdlib.h>
int main() {
  int *tamanho = malloc(sizeof(int));
  scanf("%i", tamanho);
  while (*tamanho != 0) {

    int matriz[100][100];
    for (int i = 0; i < (*tamanho) / 2; i++) {
      for (int j = 0; j < (*tamanho) / 2; j++) {
        if (i < j) {
          matriz[i][j] = i + 1;
          matriz[*tamanho - 1 - i][j] = i + 1;
          matriz[j][*tamanho - 1 - i] = i + 1;
          matriz[*tamanho - i - 1][*tamanho - j - 1] = i + 1;
          matriz[*tamanho - j - 1][*tamanho - i - 1] = i + 1;

        } else if (j < i) {
          matriz[i][j] = j + 1;
          matriz[*tamanho - 1 - i][j] = j + 1;
          matriz[j][*tamanho - 1 - i] = j + 1;
          matriz[*tamanho - j - 1][*tamanho - i - 1] = j + 1;
          matriz[*tamanho - i - 1][*tamanho - j - 1] = j + 1;
        } else {
          matriz[i][j] = i + 1;
          matriz[*tamanho - i - 1][*tamanho - i - 1] = i + 1;
          matriz[i][*tamanho - i - 1] = i + 1;
          matriz[*tamanho - i - 1][i] = i + 1;
        }
      }
    }

    if (*(tamanho) % 2 != 0) {
      for (int i = 0; i < (*tamanho) / 2; i++) {
        matriz[(*tamanho) / 2][i] = i + 1;
        matriz[(*tamanho) / 2][*tamanho - 1 - i] = i + 1;
      }
      for (int i = 0; i < (*tamanho) / 2; i++) {
        matriz[i][(*tamanho) / 2] = i + 1;
        matriz[*tamanho - 1 - i][(*tamanho) / 2] = i + 1;
      }
      matriz[(*tamanho) / 2][(*tamanho) / 2] = ((*tamanho) / 2) + 1;
    }

    for (int i = 0; i < *tamanho; i++) {
      for (int j = 0; j < *tamanho; j++) {
        if (j == 0) {
          printf("%3i", matriz[i][j]);
        } else {
          printf(" %3i", matriz[i][j]);
        }
      }
      puts("");
    }
    puts("");
    free(tamanho);
    tamanho = malloc(sizeof(int));
    scanf("%i", tamanho);
  }
}
