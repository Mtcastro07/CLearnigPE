#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frc) {
  *inteiro = (int)num;
  static float n = 0.0;
  if (num - n > 0) {
    n++;
    return frac(num, inteiro, frc);
  } else {
    *frc = num - (n - 1);
    printf("A parte inteira seria: %i e a parte fracionada: %f", *inteiro,
           *frc);
  }
}

int main() {
  float num = 4.233;
  int *inteiro = malloc(sizeof(int));
  float *frc = malloc(sizeof(float));
  frac(num, inteiro, frc);
}
