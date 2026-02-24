#include <stdio.h>
#include <stdlib.h>

int comparer(const void *a, const void *b)
{
  return (*(int*)a - *(int*)b);
}

int main()
{
  int nb_of_elements;
  printf("Combien de nombres voulez-vous trier ? ");
  scanf(" %d", &nb_of_elements);

  int tab[nb_of_elements];
  int nb;

  printf("Veuillez entrer 1 nombre a la fois:\n");
  for (int i=0; i<nb_of_elements; i++)
  {
    scanf(" %d", &nb);
    tab[i] = nb;
  }

  qsort(tab, nb_of_elements, sizeof(int), comparer);
  printf("Tableau trie: ");

  for (int i=0; i<nb_of_elements; i++)
  {
    printf("%d ", tab[i]);
  }

  return 0;
}