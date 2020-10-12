#include <stdio.h>
#include <stdlib.h>

void trier(int table[],int taille);

int main(int argc, char *argv[])
{
    long tab[6] = {150,-83,112,231,5,12};
    int i=0;
    trier(tab,6);

    for(i=0; i<6; i++)
    {
        printf("%ld\n",tab[i]);
    }
    return 0;
}

void trier(int table[],int taille)
{
    int i,j,min,d=0;

    for(i=0;i<taille-1;i++)
    {
        min=table[i];
        for(j=i+1;j<taille;j++)
        {
            if(table[j]<min)
            {
                min=table[j];
                d=j;
            }
        }
        if(table[i]!=min)
        {
            table[d]=table[i];
            table[i]=min;
        }
    }
}
