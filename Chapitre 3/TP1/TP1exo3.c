#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <limits.h>
void min(float* tab);
void max(float *tab);
int main(int argc, char *argv[])
{
    float list[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6};
    min(list);
    max(list);
}
void min(float* tab)
{
    int i, min;
    	min=INT_MAX;

	for (i=0; i<8; i++)
     {
      if(tab[i]<min) min=tab[i];
     }

     printf ("La valeur minimal est %d\n", min);
}
void max(float *tab)
{
    int i, max;
    	max=INT_MIN;

    for (i=0; i<8; i++)
     {
      if(tab[i]>max) max=tab[i];
     }
    printf ("La valeur maximal est %d\n", max);
}

