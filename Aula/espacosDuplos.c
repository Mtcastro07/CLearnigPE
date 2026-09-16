#include <stdio.h>
#include <stdlib.h>
int espacosBrancos(char *s, char *s2) {
  if (*(s + 1) != '\0') {
    if (*s == *(s + 1) && *(s + 1) == ' ') {
      espacosBrancos(s + 1, s2);
    } else {
      *s2 = *s;
      espacosBrancos(s + 1, s2 + 1);
    }
  } else {
    *s2 = '\0';
    return *s2;
  }
}

int main() {
  char *palavra = malloc(50 * sizeof(char));
  puts("Me diga uma palavra com espacos brancos duplos");
  fgets(palavra, 50, stdin);
  espacosBrancos(palavra, palavra);
  printf("%s", palavra);
}
