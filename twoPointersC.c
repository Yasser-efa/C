#include <stdio.h>
#include <string.h>

void miroir(char word[50])
{
  int temp;
  int i;
  int j = strlen(word)-1;

  for (i=0; i < j; i++)
  {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
    j--;
  }
}

int main()
{
  char word[50];
  printf("Quel mot voulez-vous inverser ?\n");
  scanf(" %s", word);
  miroir(word);
  printf("Resultat: %s", word);

}