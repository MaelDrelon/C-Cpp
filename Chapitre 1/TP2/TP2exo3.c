#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int lettre;

    printf("Mettez le poid (en g) de la lettre:\n");
    scanf("%d",&lettre);

    if(lettre<20)
    {
        printf("\nLe tarif sera de 3.00Frs\n");
    }

    else if(lettre>=20 && lettre<50)
    {
        printf("\nLe tarif sera de 3.95Frs\n");
    }

    else if(lettre>=50)
    {
        printf("\nLe tarif sera de 5.90Frs\n");
    }
}
