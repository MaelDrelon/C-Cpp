#include <stdio.h>
void affiche(int *tab, int tailletab);
int main(int argc, char *argv[])
{
    int tab[10]={1,2,4,8,16,32,64,128,256,512};
    affiche(tab, 10);
}

void affiche(int *tab, int tailletab)
{
   int i;
   for (i = 0 ; i < tailletab ; i++)
   {
       printf("%d\n", tab[i]);
   }
}
