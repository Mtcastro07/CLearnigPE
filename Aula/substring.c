#include <stdio.h>
#include <stdlib.h>

int estaContido(char *s1, char *s2, char *inicial) {
  while (*s1 != '\0') {
    if (*s2 == '\0') {
      return 1;
    } else {
      if (*s2 != *s1) {
        *s2 = *inicial;
        return estaContido(s1 + 1, s2, inicial);
      }
    }
    return estaContido(s1 + 1, s2 + 1, inicial);
  }
  return -1;
}

int substring(char *s1, char *s2) { return estaContido(s1, s2, s2); }

int main() {
  char *palavra1 = malloc(sizeof(int));
  char *termo = malloc(sizeof(int));
  scanf("%s %s", palavra1, termo);
  int resultado = substring(palavra1, termo);
  printf("%i", resultado);
}
