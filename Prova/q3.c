#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
  static int f0 = 0;
  static int f1 = 1;
  if (n - 2 > 0) {
    n--;
    int soma = f0 + f1;
    int aux = f0;
    f0 = f1;
    f1 += aux;
    return fibonacci(n);
  } else {
    return f0 + f1;
  }
}

int main() {
  int n = 0;
  int result = fibonacci(6);
  printf("%i\n", result);
}
