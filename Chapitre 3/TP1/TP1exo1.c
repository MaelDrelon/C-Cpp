#include <stdio.h>
int puissance (int, int );

int puissance (int a, int n)
{
  if (n == 0)
    return(1);
  return(a * puissance(a, n-1));
}

main()
{
  int a, b;
  printf("Entrez valeur a:\n");
  scanf("%d",&a);
  printf("\nEntrez valeur b:\n");
  scanf("%d",&b);
  printf("\nLe resultat est :\n%d\n", puissance(a,b));
}
