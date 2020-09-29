#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int result=0, multi=1, A=0;

    while(A<2 || A>10)
    {
      printf("Entrer un nombre de 2 a 10:\n");
      scanf("%d",&A);
    }
    while(multi<11)
    {
        result = A*multi;
        printf("\n%d\n",result);
        multi++;
    }

}
