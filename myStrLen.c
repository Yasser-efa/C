#include <stdio.h>

int my_strlen(char word[25])
{
  int len = 0;
  while (word[len] != '\0')
  {
    len++;
  }
  return len;
}

int main()
{
  char word[25];
  scanf(" %s", word);
  int len = my_strlen(word);
  printf("%d", len);
}