#include <stdio.h>
#include <stdlib.h>

int contagem(int n) {
  if (n < 10) {
    return 1;
  } else {
    return 1 + contagem(n / 10);
  }
}

int primeiros2(int n) {
  int digitos = contagem(n);
  int potencia = 1;
  for (int i = 0; i < digitos - 2; i++) {
    potencia *= 10;
  }
  int pares = n / potencia;
  return pares;
}

int ultimos2(int n) {
  int primeiro = (n % 10);
  n /= 10;
  n = (n % 10) * 10;
  return n + primeiro;
}

void temPropriedade(int n) {
  int numPropriedade =
      (ultimos2(n) + primeiros2(n)) * (ultimos2(n) + primeiros2(n));
  int numResultado = ((primeiros2(n) * 100) + ultimos2(n));
  if (numPropriedade == numResultado) {
    printf("Tem propriedade");
  } else {
    printf("Nao tem propriedade");
  }
}

int main() {
  int num = 20326;
  temPropriedade(num);
}
