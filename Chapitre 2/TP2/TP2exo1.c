#include <stdio.h>
#include <tchar.h>
#include <conio.h>
float t[3][4];
void main()
{

    int i, j;

  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 4; j++)
    {
      scanf("%f",&t[i][j]);
    }
  }
  printf(" Le tableau afficher = \n");
  for(i=0; i < 3; i++)
  {
    for(j = 0; j < 4; j++)
    {
      printf("%.0f ",t[i][j]);
    }
    printf("\n");
  }
}


