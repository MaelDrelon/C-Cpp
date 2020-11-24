#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float x,y;
}
point;
void main()
{
    int i;
    point pt[3];
    char lettre = 'A';
    for(i=0;i<3;i++)
    {
        printf("x=");
        scanf("%f",&pt[i].x);
        printf("y=");
        scanf("%f",&pt[i].y);
    }
    for (i=0;i<3;i++)
    {
        printf("%c : x=%.2f \n",lettre,pt[i].x);
        printf("%c : y=%.2f \n",lettre,pt[i].y);
        lettre = lettre+1;
    }
    getch();
}
