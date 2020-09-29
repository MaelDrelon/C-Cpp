#include <stdio.h>
#include <tchar.h>
#include <conio.h>

main()
{
    float t[10] = {50,14,84,5,69,4,2,5,41,36};
    int somme, i, k;

    printf("Les valeurs dans le tableau:\n");
    printf("50 14 84 5 69 4 2 5 41 36\n");


    somme = 0;
    for (i = 0; i < 10; i++)
      somme = somme + t[i];

    printf("\nLa somme est de %d\n", somme);
}
