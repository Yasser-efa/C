#include <stdio.h>
#include <string.h>

void copyStr(char newWord[50], char word[50])
{
  int len = strlen(word);

  for (int i=0; i<len; i++)
  {
    newWord[i] = word[i];
  }
  newWord[len] = '\0';
}

int main()
{
  char newWord[50];
  char word[50];
  scanf(" %s", word);
  copyStr(newWord, word);
  printf("%s, %s", word, newWord);
}