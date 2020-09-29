#include <stdio.h>
#include <tchar.h>
#include <conio.h>

main()
{
    int tab[10], i=0;

    tab[0] = 40;
    tab[1] = 49;
    tab[2] = 72;
    tab[3] = 31;
    tab[4] = 10;
    tab[5] = 54;
    tab[6] = 50;
    tab[7] = 69;
    tab[8] = 42;
    tab[9] = 100;

    for (i = 0 ; i < 10 ; i++)
    {
        printf("%d\n", tab[i]);
    }

    printf ("\nLe plus grand est le %d\n",tab[9]);
    printf ("\nLe plus petit est le %d\n",tab[4]);
}
