#include <stdio.h>

int main()
{
  char operation;
  int x, y, ans;

  printf("Veuillez entrer une valeur pour le premier nombre: ");
  scanf(" %d", &x);

  printf("Veuillez entrer une valeur pour le deuxieme nombre: ");
  scanf(" %d", &y);

  printf("Veuillez choisir entre les operations suivantes: '+' // '-' // '/' // '*': ");
  scanf(" %c", &operation);

  while ((operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))
  {
    printf("ERREUR! Veuillez introduire l'un des caracteres suivants: '+' // '-' // '/' // '*': ");
    scanf(" %c", &operation);
  }

  if (operation == '+')
  {
    ans = x + y;
    printf("%d + %d = %d", x, y, ans);
  }
  else if (operation == '-')
  {
    ans = x - y;
    printf("%d - %d = %d", x, y, ans);
  }
  else if (operation == '*')
  {
    ans = x * y;
    printf("%d * %d = %d", x, y, ans);
  }
  else if (operation == '/')
  {
    while (y == 0)
    {
      printf("ERREUR! On ne peut pas diviser par 0, veuillez reintroduire une valeur pour y: ");
      scanf("%d", &y);
    }

    ans = x / y;
    printf("%d / %d = %d", x, y, ans);
  }

  return 0;
}