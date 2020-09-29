#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int a,b;

    printf("Entrer A:\n");
    scanf("%d",&a);
    printf("\nEntrer B:\n");
    scanf("%d",&b);

    a=a+a;
    b=b+b;

    printf("\nLe produit de A est de: %d\n",a);
    printf("Le produit de B est de: %d\n",b);
}
