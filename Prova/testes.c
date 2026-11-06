#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter_string(char s1[]) {
  int len = strlen(s1);
  for (int i = 0; i < len / 2; i++) {
    char troca = s1[i];
    s1[i] = s1[len - i - 1];
    s1[len - i - 1] = troca;
  }
}

int main() {
  char **palavra = malloc(5 * sizeof(char *));
  palavra[0] = malloc(5*sizeof(char));
  palavra[0] = 
  inverter_string(palavra[0]);
  printf("%s", palavra[0]);
}
