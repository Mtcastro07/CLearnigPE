#include <stdio.h>
#include <stdlib.h>

char removeChar(char *s, char *s2, char c) {

  if (*s != '\0') {
    if (*s != c) {
      *s2 = *s;
      return removeChar(s + 1, s2 + 1, c);
    } else {
      return removeChar(s + 1, s2, c);
    }

  } else {
    *s2 = '\0';
    return *s2;
  }
}

int main() {
  char *palavra = malloc(50 * sizeof(char));
  char letra;
  puts("Me diga a palavra");
  fgets(palavra, 50, stdin);
  puts("Me diga o caracter a ser retirado");
  scanf("%c", &letra);
  getchar();
  removeChar(palavra, palavra, letra);
  printf("%s", palavra);
  free(palavra);
}
