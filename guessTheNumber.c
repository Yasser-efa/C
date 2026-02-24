#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));  // initialise le générateur aléatoire
  int nombre = rand() % 100 + 1;  // nombre entre 1 et 100
  short guess = -1;

  while (guess != nombre)
  {
    printf("Quel est votre guess ? ");
    scanf(" %hd", &guess);

    if (guess < nombre)
    {
      printf("Trop petit!\n");
    }
    else if (guess > nombre)
    {
      printf("Trop grand!\n");
    }
  }
  printf("Trouve ! C'etait bien %d", nombre);
}