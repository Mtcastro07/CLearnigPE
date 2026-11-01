#include <stdio.h>
#include <stdlib.h>

int somaVetores(int *v1, int *v2, int len1, int len2, int *v3) {
  if (len1 != len2) {
    return -1;
  }
  if (len1 > 0) {
    *v3 = *v1 + *v2;
    return somaVetores(v1 + 1, v2 + 1, len1 - 1, len2 - 1, v3 + 1);
  } else {
    return 0;
  }
}
int main() {
  int len1 = 5;
  int len2 = 5;
  int *v1 = malloc(len1 * sizeof(int));
  int *v2 = malloc(len2 * sizeof(int));
  int *v3 = malloc(len1 * sizeof(int));

  for (int i = 0; i < len1; i++) {
    scanf("%i", &v1[i]);
  }
  for (int i = 0; i < len2; i++) {
    scanf("%i", &v2[i]);
  }
  somaVetores(v1, v2, len1, len2, v3);
  for (int i = 0; i < len1; i++) {
    printf("%i", v3[i]);
  }
}
