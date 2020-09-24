#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int lettre=0;

    printf("Mettez le poid (en g) de la lettre:\n");
    scanf("%d",&lettre);

    if(lettre<20)
    {
        printf("\nLe tarif sera de 3.00Frs\n");
    }
    if(lettre>20 || lettre<50)
    {
        printf("\nLe tarif sera de 3.95Frs\n");
    }
    else
    {
        printf("\nLe tarif sera de 5.90Frs\n");
    }
}
