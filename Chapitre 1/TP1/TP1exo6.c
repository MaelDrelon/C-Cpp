#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int eleve=0, note=0, compteur=0, note10=0;

    printf("Entrez le nombre d'eleves\n");
    scanf("%d",&eleve);

    do
    {
        do
        {
            printf("\nEntrer la note\n");
            scanf("%d",&note);
            compteur++;
            if(note>10)
            {
                note10++;
                compteur++;
            }
        }
        while(note<0 || note>20);
    }
    while(compteur<=eleve);
    printf("\nIl y a %d note au dessus de 10",note10);
}
