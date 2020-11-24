#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x,y;
}
point;

int saisie(point *x, point *y, int i)
{
    for (i=0;i<15;i++)
    {
        printf("Entrer la 1er coordonnee du point n.%d : ", i+1);
        scanf ("%d",&x[i]);
        printf("Entrer la 2eme coordonnee du point n.%d : ", i+1);
        scanf ("%d",&y[i]);
        printf("\n");
    }
}
int affichage(point *x, point *y, int i)
{
    for(i=0;i<15;i++)
    {
        printf("\nLes coordonnees du point n.%d sont %d ; %d)",i+1,x[i],y[i]);
    }
}

int main(int argc, char** argv)
{
    point x[15];
    point y[15];
    int i;

    saisie(x, y, i);
    affichage (x, y, i);

    for(i=0;i<15;i++)
    {
       printf("\nLes coordonnees du point n.%d sont %d ; %d)",i+1,x[i],y[i]);
    }
}
