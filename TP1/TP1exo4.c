#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int N,E,total;
    total=0;
    N=0;
    E=0;

    while(N<1)
    {
        printf("Entrez un chiffre superieur ou egal a 1 \n");
        scanf("%d",&N);
    }
    while(E<N)
    {
        total++;
        printf("%d\n",total);
        E++;
    }
}
