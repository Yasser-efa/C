#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
  const int n = 101;
  char input[n];
  while (1) {
    char *pTab[15];
    printf("$ ");
    
    fgets(input, n, stdin);
    input[strcspn(input, "\n")] = '\0';

    char *p = strtok(input, " ");
    int i = 0;
    while (p != NULL) {
      pTab[i] = p;
      p = strtok(NULL, " ");
      i++;
    }
    int total = i;
    i = 1;
    if (!strcmp(pTab[0], "echo")) {
      while (i < total-1) {
        printf("%s ", pTab[i]);
        i++;
      }
      printf("%s\n", pTab[i]);
    }
    if (!strcmp(pTab[0], "exit")) {
      break;
    }
    
  }
}