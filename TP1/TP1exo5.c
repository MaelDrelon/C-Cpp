#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int prix=0, nombre=0, total=0;

    printf("Entrez le prix\n");
    scanf("%d",&prix);
    printf("\nEntrez le nombre d'article\n");
    scanf("%d",&nombre);

    total= prix * nombre;

    if(total>500)
    {
        total = total * 0.9;
        printf("\nLe prix total est de %d",total);
    }
    else
    {
        printf("\nLe prix total est de %d",total);
    }
}
