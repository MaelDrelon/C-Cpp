#include <stdio.h>
#include <conio.h>

main()
{
    int x=4,y;

    y=(x>5)&&(x<8);
    printf("prem evaluation : \t x=%d y=%d \n",x,y);
    x=y+x+2;
    y=(x>5)&&(x<7);
    printf("2eme evaluation : \t x=%d y=%d \n",x,y);
    getch();
}
