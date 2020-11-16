#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
void calcule(int ,int );
int main(int argc, char *argv[])
{
  int a, b;
  printf("Entrez valeur a:\n");
  scanf("%d",&a);
  printf("\nEntrez valeur b:\n");
  scanf("%d",&b);
  calcule(a,b);
}

void calcule(int a, int b)
{
  int i,pgcd;
  for(i=1; i <= a && i <= b; ++i)
    {
        if(a%i==0 && b%i==0)
        {
            pgcd = i;
        }
    }
  printf("\n%d\n",pgcd);
}
