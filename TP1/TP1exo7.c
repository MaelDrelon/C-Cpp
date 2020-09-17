#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    srand(time(NULL));
    int compteur=0, note=0;

    while(compteur<30)
    {
        note = rand()%20;
        printf("%d\n",note);
        compteur++;
    }
}
