#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    float x;

    printf("entrez votre nombre \n");
    scanf("%f",&x);

    if(!x)
    printf("erreur saisie");
    else
    printf("L'inverse du nombre choisie est : %f",1/x);

    getch();
}
