#include <stdio.h>
main()
{
    char texte[201];
    int i,j;
    int L;

    printf("Entrez une ligne de texte (max.200 caractères) :\n");
    gets(texte);

    for (L=0; texte[L]; L++)
    {

    }

    for (i=L-1; i>=0; i--)
    {
        printf("%c",texte[i]);
    }
}
