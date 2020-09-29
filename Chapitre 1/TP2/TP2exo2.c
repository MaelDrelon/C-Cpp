#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    int a,b,c;

    printf("Entrer A:\n");
    scanf("%d",&a);
    printf("\nEntrer B:\n");
    scanf("%d",&b);
    printf("\nEntrer C:\n");
    scanf("%d",&c);

    if(a>b || a>c)
    {
        printf("\n%d\n",a);
        if(b>c)
        {
            printf("\n%d\n",b);
            printf("\n%d\n",c);
        }
        else
        {
            printf("\n%d\n",c);
            printf("\n%d\n",b);
        }
    }

    if(b>a || b>c)
    {
        printf("\n%d\n",b);
        if(a>c)
        {
            printf("\n%d\n",a);
            printf("\n%d\n",c);
        }
        else
        {
            printf("\n%d\n",c);
            printf("\n%d\n",a);
        }
    }

    else
    {
        printf("\n%d\n",c);
        if(a>b)
        {
            printf("\n%d\n",a);
            printf("\n%d\n",b);
        }
        else
        {
            printf("\n%d\n",b);
            printf("\n%d\n",a);
        }
    }
}
